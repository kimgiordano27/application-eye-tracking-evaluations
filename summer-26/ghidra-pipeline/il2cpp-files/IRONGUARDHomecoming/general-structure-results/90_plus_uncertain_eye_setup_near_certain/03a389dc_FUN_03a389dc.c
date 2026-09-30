/*
FUNCTION_NAME: FUN_03a389dc
ENTRY_POINT: 03a389dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03a38c94) */

long * FUN_03a389dc(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04838c4e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_6257);
    DAT_04838c4e = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_IsGettable__);
    FUN_034efd20(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_7168);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 03a38a40 to 03b38a43 has its CatchHandler @ 03a38af0 */
    iVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                    /* try { // try from 03a38a44 to 03b38a47 has its CatchHandler @ 03a38ae8 */
                    /* try { // try from 03a38a48 to 03b38a4f has its CatchHandler @ 03a38580 */
    if ((iVar4 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
      plVar5 = (long *)0x0;
    }
    else {
                    /* try { // try from 03a38a50 to 03b38a53 has its CatchHandler @ 03a38a74 */
      plVar5 = *(long **)(param_1 + 0x10);
                    /* try { // try from 03a38a54 to 03b38a57 has its CatchHandler @ 03a38ad8 */
      if (plVar5 == (long *)0x0) goto LAB_03a38c44;
                    /* try { // try from 03a38a58 to 03b38a5b has its CatchHandler @ 03a38ad4 */
                    /* try { // try from 03a38a5c to 03b38a5f has its CatchHandler @ 03a38a6c */
                    /* catch() { ... } // from try @ 03a386fc with catch @ 03a38a60
                       try { // try from 03a38a60 to 03b38a97 has its CatchHandler @ 03a38580 */
                    /* catch() { ... } // from try @ 03a388f4 with catch @ 03a38a64 */
      plVar6 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      puVar3 = StringLiteral_6257;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* catch() { ... } // from try @ 03a38820 with catch @ 03a38a68 */
                    /* catch() { ... } // from try @ 03a38768 with catch @ 03a38a6c
                       catch() { ... } // from try @ 03a38a5c with catch @ 03a38a6c */
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar6;
        lVar10 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* try { // try from 03a38a98 to 03b38a9b has its CatchHandler @ 03a38aac */
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03a38acc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
                    /* catch() { ... } // from try @ 03a38a98 with catch @ 03a38aac */
          } while (uVar12 != 0);
        }
                    /* try { // try from 03a38ab8 to 03b38ad3 has its CatchHandler @ 03a38b4c */
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar10,0);
LAB_03a38acc:
                    /* catch() { ... } // from try @ 03a38930 with catch @ 03a38ad4
                       catch() { ... } // from try @ 03a38a58 with catch @ 03a38ad4
                       try { // try from 03a38ad4 to 03b38b0b has its CatchHandler @ 03a38580 */
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* catch() { ... } // from try @ 03a3885c with catch @ 03a38ad8
                       catch() { ... } // from try @ 03a38a54 with catch @ 03a38ad8 */
        if ((uVar12 & 1) == 0) {
          plVar5 = (long *)0x0;
          break;
        }
                    /* catch() { ... } // from try @ 03a38964 with catch @ 03a38adc */
        lVar11 = *plVar6;
                    /* catch() { ... } // from try @ 03a3889c with catch @ 03a38ae0 */
        lVar10 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 03a38804 with catch @ 03a38ae4
                       catch() { ... } // from try @ 03a38880 with catch @ 03a38ae4
                       catch() { ... } // from try @ 03a388d8 with catch @ 03a38ae4
                       catch() { ... } // from try @ 03a38948 with catch @ 03a38ae4 */
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 03a3899c with catch @ 03a38ae8
                       catch() { ... } // from try @ 03a38a44 with catch @ 03a38ae8 */
        if (uVar12 != 0) {
                    /* catch() { ... } // from try @ 03a387d8 with catch @ 03a38aec */
                    /* catch() { ... } // from try @ 03a38a40 with catch @ 03a38af0 */
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 03a387b4 with catch @ 03a38af4 */
            if (*(long *)(piVar13 + -2) == lVar10) {
                    /* catch() { ... } // from try @ 03a38b0c with catch @ 03a38b20 */
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03a38b2c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
                    /* try { // try from 03a38b0c to 03b38b0f has its CatchHandler @ 03a38b20 */
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar10,1);
LAB_03a38b2c:
                    /* try { // try from 03a38b2c to 03b38b37 has its CatchHandler @ 03a38b4c */
        plVar5 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 03a38b38 to 03b38b43 has its CatchHandler @ 03a38580 */
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* try { // try from 03a38b44 to 03b38b4b has its CatchHandler @ 03a38b4c */
                    /* catch() { ... } // from try @ 03a38ab8 with catch @ 03a38b4c
                       catch() { ... } // from try @ 03a38b2c with catch @ 03a38b4c
                       catch() { ... } // from try @ 03a38b44 with catch @ 03a38b4c */
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* try { // try from 03a38b50 to 03b38d37 has its CatchHandler @ 03a38b50
                       catch() { ... } // from try @ 03a38b50 with catch @ 03a38b50
                       catch() { ... } // from try @ 03a38da0 with catch @ 03a38b50
                       catch() { ... } // from try @ 03a38e04 with catch @ 03a38b50
                       catch() { ... } // from try @ 03a38e54 with catch @ 03a38b50 */
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if (plVar5[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(plVar5[2] + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = FUN_0340e040(lVar10,param_2,0);
      } while ((uVar12 & 1) == 0);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03a38c0c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03a38c0c:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    return plVar5;
  }
LAB_03a38c44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


