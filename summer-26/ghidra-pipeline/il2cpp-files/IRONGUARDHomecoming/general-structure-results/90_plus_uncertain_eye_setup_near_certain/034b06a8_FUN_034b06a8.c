/*
FUNCTION_NAME: FUN_034b06a8
ENTRY_POINT: 034b06a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_034b06a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  
                    /* try { // try from 034b06bc to 035b06e7 has its CatchHandler @ 034b0734 */
  if ((DAT_04832c18 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 034b06f0 to 035b06f3 has its CatchHandler @ 034b072c */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    DAT_04832c18 = 1;
  }
  puVar1 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 == (long *)0x0) {
    uVar12 = thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__);
    uVar12 = FUN_035ac8e0(uVar12,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_035795c8(uVar5,0,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(Method_System_ThrowHelper_ThrowArgumentException__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar12);
  }
  plVar9 = (long *)(param_1 + 0x20);
  plVar10 = (long *)*plVar9;
  if (plVar10 != (long *)0x0) {
LAB_034b0900:
                    /* WARNING: Could not recover jumptable at 0x034b0924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x308))(plVar10,param_2,*(undefined8 *)(*plVar10 + 0x310));
    return;
  }
                    /* try { // try from 034b0714 to 035b0717 has its CatchHandler @ 034b0744 */
                    /* try { // try from 034b0718 to 035b071b has its CatchHandler @ 034b0740 */
                    /* try { // try from 034b071c to 035b071f has its CatchHandler @ 034b073c */
                    /* try { // try from 034b0720 to 035b0723 has its CatchHandler @ 034b0754 */
                    /* try { // try from 034b0724 to 035b0727 has its CatchHandler @ 034b0738 */
  if (*(int *)(*(long *)Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__ +
              0xe0) == 0) {
                    /* try { // try from 034b0728 to 035b072b has its CatchHandler @ 034b0730 */
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 034b06f0 with catch @ 034b072c
                       try { // try from 034b072c to 035b076f has its CatchHandler @ 034b0358 */
                    /* catch() { ... } // from try @ 034b0728 with catch @ 034b0730 */
                    /* catch() { ... } // from try @ 034b06bc with catch @ 034b0734 */
  if (DAT_048321c0 == '\0') {
                    /* catch() { ... } // from try @ 034b0724 with catch @ 034b0738 */
                    /* catch() { ... } // from try @ 034b071c with catch @ 034b073c */
                    /* catch() { ... } // from try @ 034b0718 with catch @ 034b0740 */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
                    /* catch() { ... } // from try @ 034b0714 with catch @ 034b0744 */
                    /* catch() { ... } // from try @ 034b0538 with catch @ 034b0748 */
    DAT_048321c0 = '\x01';
  }
                    /* catch() { ... } // from try @ 034b061c with catch @ 034b074c */
  lVar3 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 034b04cc with catch @ 034b0750 */
                    /* catch() { ... } // from try @ 034b0564 with catch @ 034b0754
                       catch() { ... } // from try @ 034b0720 with catch @ 034b0754 */
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 034b0650 with catch @ 034b0758 */
    thunk_FUN_01ee6d7c();
                    /* catch() { ... } // from try @ 034b05a0 with catch @ 034b075c */
    lVar3 = *(long *)puVar1;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
                    /* try { // try from 034b0770 to 035b0773 has its CatchHandler @ 034b078c */
                    /* try { // try from 034b0774 to 035b0797 has its CatchHandler @ 034b0358 */
  plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__
                                      );
  FUN_035470a4(plVar10,uVar12,0);
                    /* catch() { ... } // from try @ 034b0770 with catch @ 034b078c */
                    /* try { // try from 034b0798 to 035b07a3 has its CatchHandler @ 034b07a4 */
  plVar11 = (long *)(**(code **)(*plVar11 + 0x328))(plVar11,*(undefined8 *)(*plVar11 + 0x330));
  puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
LAB_034b0928:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034b0800;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_034b0800:
    uVar7 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      *plVar9 = (long)plVar10;
      thunk_FUN_01f51358(plVar9,plVar10);
      if (plVar10 != (long *)0x0) goto LAB_034b0900;
      goto LAB_034b0928;
    }
    lVar6 = *plVar11;
    lVar3 = *(long *)puVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034b085c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar3,0);
LAB_034b085c:
    uVar12 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    lVar6 = *plVar11;
    lVar3 = *(long *)puVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto FUN_034b08bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar3,1);
FUN_034b08bc:
    uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (plVar10 == (long *)0x0) goto LAB_034b0928;
    (**(code **)(*plVar10 + 0x2a8))(plVar10,uVar12,uVar5,*(undefined8 *)(*plVar10 + 0x2b0));
  } while( true );
}


