/*
FUNCTION_NAME: FUN_0347fe8c
ENTRY_POINT: 0347fe8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0347fe8c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  
                    /* try { // try from 0347fe98 to 0357fe9b has its CatchHandler @ 0347feb8 */
                    /* try { // try from 0347fe9c to 0357fe9f has its CatchHandler @ 0347feb4 */
                    /* try { // try from 0347fea0 to 0357fee3 has its CatchHandler @ 0347fc70 */
                    /* catch() { ... } // from try @ 0347fdf8 with catch @ 0347fea4 */
                    /* catch() { ... } // from try @ 0347fdd0 with catch @ 0347fea8 */
                    /* catch() { ... } // from try @ 0347fde0 with catch @ 0347feac */
  if ((DAT_04832a82 & 1) == 0) {
                    /* catch() { ... } // from try @ 0347fe04 with catch @ 0347feb0 */
                    /* catch() { ... } // from try @ 0347fe9c with catch @ 0347feb4 */
                    /* catch() { ... } // from try @ 0347fe98 with catch @ 0347feb8 */
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
                    /* catch() { ... } // from try @ 0347fe2c with catch @ 0347febc */
                    /* catch() { ... } // from try @ 0347fe54 with catch @ 0347fec0 */
                    /* catch() { ... } // from try @ 0347fe10 with catch @ 0347fec4 */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetDictionaryItem_Set__);
                    /* catch() { ... } // from try @ 0347fdac with catch @ 0347fec8 */
                    /* catch() { ... } // from try @ 0347fd94 with catch @ 0347fecc */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
                    /* try { // try from 0347fee4 to 0357fee7 has its CatchHandler @ 0347ff10 */
    DAT_04832a82 = 1;
  }
  if (param_2 == 0) goto LAB_0348004c;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  lVar2 = thunk_FUN_01f116d0(param_2,uVar11);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2,uVar11);
  }
  uVar8 = *(uint *)(lVar2 + 0x18);
  if (uVar8 == 0) {
LAB_03480050:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar12 = *(long *)(lVar2 + 0x20);
  if (lVar12 == 0) {
    lVar3 = 0;
    lVar4 = lVar2;
  }
  else {
    uVar11 = *(undefined8 *)Method_Unity_VisualScripting_SetDictionaryItem_Set__;
    lVar3 = thunk_FUN_01f116d0(lVar12,uVar11);
    if (lVar3 == 0) goto LAB_03480054;
    uVar8 = *(uint *)(lVar2 + 0x18);
    lVar4 = lVar3;
  }
  puVar1 = Method_Sirenix_Serialization_Serializer_Get<Color>__;
  if (uVar8 < 2) goto LAB_03480050;
  lVar12 = *(long *)(lVar2 + 0x28);
  FUN_0347f994(lVar4,lVar3);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar12 == 0) {
    plVar5 = (long *)0x0;
    if (lVar2 != 0) goto LAB_0347ff88;
LAB_0347ffac:
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)Method_System_RuntimeType_InvokeMember__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_0345cb78(uVar11,lVar3,0);
  }
  else {
    uVar11 = *(undefined8 *)puVar1;
    plVar5 = (long *)thunk_FUN_01f116d0(lVar12,uVar11);
    if (plVar5 == (long *)0x0) {
LAB_03480054:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar12,uVar11);
    }
    if (lVar2 == 0) goto LAB_0347ffac;
LAB_0347ff88:
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) goto LAB_0348004c;
    uVar11 = (**(code **)(*plVar6 + 0x188))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 400));
  }
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    lVar2 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0348002c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar2,0);
LAB_0348002c:
                    /* WARNING: Could not recover jumptable at 0x03480048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar7)(plVar5,uVar11,puVar7[1]);
    return;
  }
LAB_0348004c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


