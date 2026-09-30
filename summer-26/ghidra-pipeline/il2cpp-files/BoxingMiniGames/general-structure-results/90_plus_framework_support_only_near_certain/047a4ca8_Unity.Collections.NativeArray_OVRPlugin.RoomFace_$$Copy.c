/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Copy
ENTRY_POINT: 047a4ca8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Copy
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  int iVar1;
  char in_NG;
  char in_OV;
  uint uVar2;
  int iVar3;
  uint in_w8;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w22;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  lVar6 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w26;
  iVar1 = param_3;
  if (in_NG != in_OV) {
    iVar1 = param_3 + 1;
  }
  uStack0000000000000088 = *(undefined8 *)(lVar6 + 0x28);
  uStack0000000000000080 = *(undefined8 *)(lVar6 + 0x20);
  uStack0000000000000090 = *(undefined8 *)(lVar6 + 0x30);
  if ((int)unaff_w24 <= iVar1 >> 1) {
    do {
      uVar9 = unaff_w24 * 2;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a4c30 with catch @ 047a4ce8
                       try { // try from 047a4ce8 to 048a4cff has its CatchHandler @ 047a4be8 */
      uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if ((int)uVar9 < param_3) {
        uVar2 = uVar9 + param_4;
                    /* try { // try from 047a4d00 to 048a4d17 has its CatchHandler @ 047a4d84 */
        if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) goto LAB_047a4ea8;
        if (param_5 == 0) goto LAB_047a4eac;
        lVar6 = unaff_x19 + (long)(int)(uVar2 - 1) * (long)unaff_w26;
                    /* try { // try from 047a4d18 to 048a4d73 has its CatchHandler @ 047a4be8 */
        lVar7 = unaff_x19 + (long)(int)uVar2 * (long)unaff_w26;
        uVar11 = *(undefined8 *)(lVar6 + 0x28);
        uVar10 = *(undefined8 *)(lVar6 + 0x20);
        uVar5 = *(undefined8 *)(lVar6 + 0x30);
        uVar13 = *(undefined8 *)(lVar7 + 0x28);
        uVar12 = *(undefined8 *)(lVar7 + 0x20);
        uVar8 = *(undefined8 *)(lVar7 + 0x30);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        in_stack_000000a0 = uVar12;
        in_stack_000000a8 = uVar13;
        in_stack_000000b0 = uVar8;
        in_stack_000000c0 = uVar10;
        in_stack_000000c8 = uVar11;
        in_stack_000000d0 = uVar5;
        uVar2 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                           *(undefined8 *)(param_5 + 0x28));
        uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
        uVar9 = uVar9 | uVar2 >> 0x1f;
      }
      unaff_w22 = unaff_w25 + uVar9;
      if (uVar4 <= unaff_w22) goto LAB_047a4ea8;
      if (param_5 == 0) {
LAB_047a4eac:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = *(undefined8 *)(lVar6 + 0x30);
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_000000d0 = uStack0000000000000090;
      in_stack_000000c8 = uStack0000000000000088;
      in_stack_000000c0 = uStack0000000000000080;
      in_stack_000000a0 = uVar8;
      in_stack_000000a8 = uVar10;
      in_stack_000000b0 = uVar5;
      iVar3 = (**(code **)(param_5 + 0x18))
                        (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(param_5 + 0x28));
      if (-1 < iVar3) {
        unaff_w22 = unaff_w25 + unaff_w24;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w22) ||
         (uVar4 = unaff_w25 + unaff_w24, *(uint *)(unaff_x19 + 0x18) <= uVar4)) goto LAB_047a4ea8;
      lVar7 = unaff_x19 + (long)(int)uVar4 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      uVar5 = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      *(undefined8 *)(lVar7 + 0x20) = uVar5;
      thunk_FUN_036b7ad0(unaff_x19 + 0x20 + (long)(int)uVar4 * (long)unaff_w26,0);
      unaff_w24 = uVar9;
    } while ((int)uVar9 <= iVar1 >> 1);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w22 < in_w8) {
    lVar6 = unaff_x19 + (long)(int)unaff_w22 * 0x18;
    *(undefined8 *)(lVar6 + 0x28) = uStack0000000000000088;
    *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000080;
    *(undefined8 *)(lVar6 + 0x30) = uStack0000000000000090;
    thunk_FUN_036b7ad0(lVar6 + 0x20,0);
    return;
  }
LAB_047a4ea8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


