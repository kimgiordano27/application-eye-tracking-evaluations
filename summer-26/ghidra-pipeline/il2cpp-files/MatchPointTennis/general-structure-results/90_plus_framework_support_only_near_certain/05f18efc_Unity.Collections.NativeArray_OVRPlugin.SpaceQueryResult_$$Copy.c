/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05f18efc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,uint param_2,int param_3,undefined8 *param_4,long *param_5,long param_6
               )

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* try { // try from 05f18f14 to 06018f3b has its CatchHandler @ 05f18f50 */
  iVar8 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar8) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f18f14 with catch @ 05f18f50
                       catch(type#2 @ 00000000) { ... } // from try @ 05f18f48 with catch @ 05f18f50
                        */
    if (param_1 == 0) {
LAB_05f19090:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      uVar1 = param_2 + ((int)(iVar8 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar3 = param_1 + (long)(int)uVar1 * 0x40;
      uVar15 = *(undefined8 *)(lVar3 + 0x48);
      uVar13 = *(undefined8 *)(lVar3 + 0x40);
      uVar11 = *(undefined8 *)(lVar3 + 0x58);
      uVar9 = *(undefined8 *)(lVar3 + 0x50);
      uVar23 = *(undefined8 *)(lVar3 + 0x28);
      uVar21 = *(undefined8 *)(lVar3 + 0x20);
      uVar19 = *(undefined8 *)(lVar3 + 0x38);
      uVar17 = *(undefined8 *)(lVar3 + 0x30);
      uVar16 = param_4[5];
      uVar14 = param_4[4];
      uVar12 = param_4[7];
      uVar10 = param_4[6];
      uVar24 = param_4[1];
      uVar22 = *param_4;
      uVar20 = param_4[3];
      uVar18 = param_4[2];
      if (param_5 == (long *)0x0) goto LAB_05f19090;
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      lVar5 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05f19034;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(param_5,lVar3,0);
LAB_05f19034:
      local_d0 = uVar22;
      uStack_c8 = uVar24;
      uStack_c0 = uVar18;
      uStack_b8 = uVar20;
      local_b0 = uVar14;
      uStack_a8 = uVar16;
      uStack_a0 = uVar10;
      uStack_98 = uVar12;
      local_90 = uVar21;
      uStack_88 = uVar23;
      uStack_80 = uVar17;
      uStack_78 = uVar19;
      local_70 = uVar13;
      uStack_68 = uVar15;
      uStack_60 = uVar9;
      uStack_58 = uVar11;
      iVar2 = (*(code *)*puVar4)(param_5,&local_90,&local_d0,puVar4[1]);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar8 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar8);
  }
                    /* try { // try from 05f18f3c to 06018f47 has its CatchHandler @ 05f18a08 */
                    /* try { // try from 05f18f48 to 06018f4f has its CatchHandler @ 05f18f50 */
  return ~param_2;
}


