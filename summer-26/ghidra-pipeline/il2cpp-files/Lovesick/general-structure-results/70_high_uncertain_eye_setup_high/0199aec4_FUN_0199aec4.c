/*
FUNCTION_NAME: FUN_0199aec4
ENTRY_POINT: 0199aec4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
FUN_0199aec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  int iVar20;
  undefined4 local_a8 [4];
  uint local_98;
  
  puVar8 = Method_AutoExtensions_CanGetComponent<InventoryObject>__;
                    /* try { // try from 0199aecc to 01a9af4f has its CatchHandler @ 0199acc8 */
  if ((DAT_0377a4cf & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventSystem>_IndexOf__);
    thunk_FUN_00d48444(Method_AutoExtensions_CanGetComponent<InventoryObject>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6548);
                    /* try { // try from 0199af50 to 01a9af53 has its CatchHandler @ 0199af5c */
                    /* try { // try from 0199af54 to 01a9af83 has its CatchHandler @ 0199acc8 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0199af50 with catch @ 0199af5c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0199ae9c with catch @ 0199af60
                        */
    thunk_FUN_00d48444(OVRPlugin_<>c_TypeInfo);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0199ae6c with catch @ 0199af64
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0199ae10 with catch @ 0199af68
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0199aeb0 with catch @ 0199af6c
                        */
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_0377a4cf = 1;
  }
  lVar9 = *(long *)puVar8;
  iVar20 = *(int *)(param_4 + 0x30);
                    /* try { // try from 0199af84 to 01a9af87 has its CatchHandler @ 0199b000 */
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *(long *)puVar8;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    lVar9 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                         *(undefined4 *)(lVar9 + 0x18));
    puVar7 = OVRPlugin_<>c_TypeInfo;
    lVar12 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
    if (lVar12 != 0) {
                    /* try { // try from 0199afc4 to 01a9afeb has its CatchHandler @ 0199b00c */
      lVar10 = FUN_00da4fb8(*(undefined8 *)
                             Method_System_Collections_Generic_List<EventSystem>_IndexOf__,
                            *(undefined4 *)(lVar12 + 0x18));
                    /* try { // try from 0199afec to 01a9aff7 has its CatchHandler @ 0199acc8 */
      iVar14 = 0;
      bVar6 = false;
                    /* try { // try from 0199aff8 to 01a9afff has its CatchHandler @ 0199b00c */
      uVar18 = 0;
      lVar12 = lVar10 + 0x20;
                    /* catch() { ... } // from try @ 0199af84 with catch @ 0199b000 */
      lVar2 = lVar9 + 0x20;
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0199afc4 with catch @ 0199b00c
                       catch(type#2 @ 00000000) { ... } // from try @ 0199aff8 with catch @ 0199b00c
                        */
        FUN_0199cca0(param_4,param_5,param_6,param_7,lVar9);
        FUN_0199cff0(param_4,param_5,0);
        lVar16 = *(long *)(param_4 + 0x40);
        if (lVar16 == 0) goto LAB_0199b26c;
        lVar13 = *(long *)
                  Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
        ;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if ((uVar11 & 1) == 0) {
          *(undefined4 *)(lVar16 + 0x18) = 0;
        }
        else {
          iVar15 = *(int *)(lVar16 + 0x18);
          *(undefined4 *)(lVar16 + 0x18) = 0;
          if (0 < iVar15) {
            FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar15,0);
          }
        }
        uVar17 = *(undefined8 *)(param_4 + 0x40);
        FUN_0199cff0(param_4,param_5,iVar14 + 1);
        uVar11 = FUN_0199d3d0(param_1,param_2,param_3,param_4,param_8,uVar17,0);
        if ((uVar11 & 1) != 0) {
          lVar16 = *(long *)(param_4 + 0x40);
          if (lVar16 == 0) goto LAB_0199b26c;
          iVar15 = 0;
          while (iVar15 < *(int *)(lVar16 + 0x18)) {
            lVar13 = *(long *)(param_4 + 0x28);
            FUN_0132138c(lVar16,iVar15,local_a8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                        );
            if (lVar13 == 0) goto LAB_0199b26c;
            FUN_0132138c(lVar13,local_a8[0],local_a8,*(undefined8 *)puVar7);
            uVar4 = local_98;
            lVar16 = *(long *)puVar8;
            lVar13 = (long)(int)local_98;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar16 = *(long *)puVar8;
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
            if (lVar16 == 0) goto LAB_0199b26c;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_0199b268;
            iVar5 = *(int *)(lVar16 + lVar13 * 4 + 0x20);
            if (-1 < iVar5) {
              if (lVar10 == 0) goto LAB_0199b26c;
              uVar4 = *(uint *)(lVar10 + 0x18);
              uVar11 = (long)iVar5;
              do {
                if (uVar4 <= uVar11) goto LAB_0199b268;
                if (*(char *)(lVar12 + uVar11) == '\0') {
                  uVar18 = 1;
                  iVar3 = iVar5;
                  if (iVar5 <= iVar14) {
                    iVar3 = iVar14;
                  }
                  *(undefined1 *)(lVar12 + uVar11) = 1;
                  iVar14 = iVar3;
                }
                bVar1 = 0 < (long)uVar11;
                uVar11 = uVar11 - 1;
              } while (bVar1);
            }
            lVar16 = *(long *)(param_4 + 0x40);
            iVar15 = iVar15 + 1;
            if (lVar16 == 0) goto LAB_0199b26c;
          }
        }
        if (lVar9 == 0) goto LAB_0199b26c;
        uVar4 = *(uint *)(lVar9 + 0x18);
        if (0 < (long)((ulong)uVar4 << 0x20)) {
          bVar1 = false;
          uVar11 = 0;
          do {
            if (lVar10 == 0) goto LAB_0199b26c;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0199b268;
            if (*(char *)(lVar12 + uVar11) == '\0') {
              if (uVar4 <= uVar11) {
LAB_0199b268:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              fVar19 = 1.0 / (float)iVar20 + *(float *)(lVar2 + uVar11 * 4);
              *(float *)(lVar2 + uVar11 * 4) = fVar19;
              if (fVar19 <= 1.0) {
                bVar6 = true;
              }
              else {
                bVar6 = true;
                bVar1 = true;
                *(undefined4 *)(lVar2 + uVar11 * 4) = 0x3f800000;
              }
            }
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)uVar4);
          if (bVar1) break;
        }
      } while (bVar6);
      FUN_0199cca0(param_4,param_5,param_6,param_7,lVar9);
      return uVar18;
    }
  }
LAB_0199b26c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


