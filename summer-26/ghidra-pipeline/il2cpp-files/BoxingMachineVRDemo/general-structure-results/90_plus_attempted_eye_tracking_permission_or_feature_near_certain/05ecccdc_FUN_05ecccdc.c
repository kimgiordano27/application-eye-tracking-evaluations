/*
FUNCTION_NAME: FUN_05ecccdc
ENTRY_POINT: 05ecccdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 141
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05eccf4c) */
/* WARNING: Removing unreachable block (ram,0x05eccf54) */

undefined1  [16]
FUN_05ecccdc(undefined1 param_1 [16],long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  uVar15 = param_1._8_8_;
  uVar14 = param_1._0_8_;
                    /* try { // try from 05eccd04 to 05fccdab has its CatchHandler @ 05ecc694 */
  if ((DAT_06b83c67 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<MaterialPropertyBlockHelper>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<MeshCollider>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<MeshFilter>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<MeshRenderer>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<MuscleCollisionBroadcaster>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVREyeGaze>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    DAT_06b83c67 = 1;
  }
  puVar5 = Method_UnityEngine_Component_GetComponent<OVRManager>__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(*(long *)(param_2 + 0x10) + 0x18) != 0) {
                    /* try { // try from 05eccdac to 05fccdb3 has its CatchHandler @ 05eccf8c */
    cVar1 = *(char *)(param_2 + 0x28);
    FUN_04167e70(param_2,1,*(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 05eccdc8 to 05fccdcf has its CatchHandler @ 05eccf88 */
    FUN_03aaceb0(&local_98,*(long *)(param_2 + 0x10),
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    puVar4 = Method_UnityEngine_Component_GetComponent<MuscleCollisionBroadcaster>__;
    puVar3 = Method_UnityEngine_Component_GetComponent<MeshFilter>__;
    puVar2 = Method_UnityEngine_Component_GetComponent<MeshCollider>__;
    auVar12._8_8_ = uVar15;
    auVar12._0_8_ = uVar14;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while( true ) {
      uVar15 = auVar12._8_8_;
      uVar14 = auVar12._0_8_;
      uVar7 = FUN_04a7a4a0(&local_80,*(undefined8 *)puVar3);
      plVar6 = local_70;
      if ((uVar7 & 1) == 0) break;
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *local_70;
      lVar9 = *(long *)puVar4;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 05ecce30 to 05fcce37 has its CatchHandler @ 05eccf80 */
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
                    /* try { // try from 05ecce6c to 05fcceaf has its CatchHandler @ 05eccf94 */
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05ecce70;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(local_70,lVar9,0);
LAB_05ecce70:
      uVar7 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      auVar12._8_8_ = uVar15;
      auVar12._0_8_ = uVar14;
      if ((uVar7 & 1) != 0) {
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar4;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_05ecced0;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 05ecceb0 to 05fccf5f has its CatchHandler @ 05ecc694 */
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar9,1);
LAB_05ecced0:
        auVar12 = (*(code *)*puVar8)(uVar14,plVar6,param_3,param_4,puVar8[1]);
      }
    }
    FUN_04a7a49c(&local_80,*(undefined8 *)puVar2);
    if (cVar1 == '\0') {
      FUN_04167e70(param_2,0,*(undefined8 *)puVar5);
    }
  }
  auVar13._8_8_ = uVar15;
  auVar13._0_8_ = uVar14;
  return auVar13;
}


