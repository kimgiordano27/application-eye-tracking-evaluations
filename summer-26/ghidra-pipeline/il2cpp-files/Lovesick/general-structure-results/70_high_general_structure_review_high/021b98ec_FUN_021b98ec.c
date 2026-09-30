/*
FUNCTION_NAME: FUN_021b98ec
ENTRY_POINT: 021b98ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int FUN_021b98ec(long *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined1 local_80 [16];
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
                    /* try { // try from 021b9904 to 022b990f has its CatchHandler @ 021b99d0 */
                    /* try { // try from 021b9910 to 022b99cb has its CatchHandler @ 021b98c4 */
  if ((DAT_0378160f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9197);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GSTU_Cell>__ctor__);
    thunk_FUN_00d48444(StringLiteral_5681);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_Remove__);
    thunk_FUN_00d48444(StringLiteral_2558);
    thunk_FUN_00d48444(PTR_DAT_033f3958);
    DAT_0378160f = 1;
  }
  puVar4 = PTR_DAT_033f3958;
  uStack_68 = 0;
  local_60 = 0;
  local_80._8_8_ = 0;
  local_70 = (long *)0x0;
  local_80._0_8_ = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar9 = StringLiteral_9197;
  puVar8 = StringLiteral_5681;
  puVar7 = StringLiteral_2558;
  puVar6 = Method_System_Collections_Generic_List<GSTU_Cell>__ctor__;
  puVar5 = Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_Remove__;
  local_80 = FUN_0213f7cc(0);
                    /* try { // try from 021b99cc to 022b99cf has its CatchHandler @ 021b99d0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b9904 with catch @ 021b99d0
                       catch(type#1 @ 03274860) { ... } // from try @ 021b99cc with catch @ 021b99d0
                       try { // try from 021b99d0 to 022b99e7 has its CatchHandler @ 021b98c4 */
  FUN_01380f50(&local_58,local_80,*(undefined8 *)puVar4);
                    /* try { // try from 021b99e8 to 022b99ff has its CatchHandler @ 021b9a3c */
  iVar12 = 0;
  uStack_68 = uStack_50;
  local_70 = local_58;
  local_60 = local_48;
  while( true ) {
    do {
      do {
        uVar10 = FUN_012bc794(&local_70,*(undefined8 *)puVar6);
                    /* try { // try from 021b9a00 to 022b9a2b has its CatchHandler @ 021b98c4 */
        if ((uVar10 & 1) == 0) {
          FUN_012bc790(&local_70,*(undefined8 *)puVar9);
          lVar11 = *(long *)puVar7;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar7;
          }
          return *(int *)(*(long *)(lVar11 + 0xb8) + 0x14);
        }
        FUN_012bc7c0(&local_70,&local_58,*(undefined8 *)puVar8);
      } while (local_58 == (long *)0x0);
      bVar2 = *(byte *)(*(long *)puVar5 + 300);
                    /* try { // try from 021b9a2c to 022b9a3b has its CatchHandler @ 021b9a3c */
    } while ((*(byte *)(*local_58 + 300) < bVar2) ||
            (*(long *)(*(long *)(*local_58 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5
                    /* catch() { ... } // from try @ 021b99e8 with catch @ 021b9a3c
                       catch() { ... } // from try @ 021b9a2c with catch @ 021b9a3c */
                    /* try { // try from 021b9a40 to 022b9a43 has its CatchHandler @ 021b9a4c */
                    /* try { // try from 021b9a44 to 022b9a4f has its CatchHandler @ 021b98c4 */));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021b9a40 with catch @ 021b9a4c
                        */
    if (param_1 == local_58) break;
    iVar12 = iVar12 + 1;
  }
  lVar11 = *(long *)puVar7;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar7;
  }
  iVar1 = *(int *)(*(long *)(lVar11 + 0xb8) + 0x14);
  iVar3 = *(int *)(*(long *)(lVar11 + 0xb8) + 0x18) + -1;
  if (iVar3 <= iVar12) {
    iVar12 = iVar3;
  }
  FUN_012bc790(&local_70,*(undefined8 *)puVar9);
  return iVar12 + iVar1;
}


