/*
FUNCTION_NAME: FoveationFeature$$setFoveationEyeTracked
ENTRY_POINT: 073c4f9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__setFoveationEyeTracked(void)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long lStack0000000000000018;
  
  *(undefined1 *)(unaff_x21 + 0x694) = in_w8;
                    /* catch() { ... } // from try @ 073c4e60 with catch @ 073c4fa0
                       try { // try from 073c4fa0 to 074c4fbf has its CatchHandler @ 073c4e0c */
                    /* catch() { ... } // from try @ 073c4efc with catch @ 073c4fa4
                       catch() { ... } // from try @ 073c4f2c with catch @ 073c4fa4 */
  lStack0000000000000018 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  plVar2 = (long *)thunk_FUN_037787d0();
  lVar5 = 0;
  if (plVar2 == (long *)0x0) {
LAB_073c5040:
    bVar1 = true;
  }
  else {
    lVar5 = *plVar2;
                    /* try { // try from 073c4fc0 to 074c4fd7 has its CatchHandler @ 073c5260 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 073c4fd8 to 074c4fe3 has its CatchHandler @ 073c4e0c */
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
                    /* try { // try from 073c5004 to 074c5027 has its CatchHandler @ 073c5090 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_073c5008;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 073c4fe4 to 074c4ffb has its CatchHandler @ 073c5098 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x22,0);
LAB_073c5008:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 == 0) goto LAB_073c5040;
    plVar2 = (long *)unaff_x19[0x14];
    if (plVar2 == (long *)0x0) goto LAB_073c5180;
    uVar6 = (**(code **)(*plVar2 + 0x178))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x180));
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_060b76a8(*(undefined8 *)UnityEngine_ProBuilder_Normals_TypeInfo);
      uVar4 = System_Convert__ToInt32
                        (uVar4,*(undefined8 *)Unity_Netcode_NotAuthorityRpcTarget_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755df88(uVar4);
      return;
    }
    bVar1 = false;
  }
  if ((long *)unaff_x19[0x14] == (long *)0x0) {
LAB_073c5180:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar6 = (**(code **)(*(long *)unaff_x19[0x14] + 0x198))();
  if ((uVar6 & 1) != 0) {
    if (!bVar1) {
      if (unaff_x19[0x1c] == 0) goto LAB_073c5180;
      FUN_045ba050();
    }
    if (unaff_x19[0x25] == 0) goto LAB_073c5180;
    _uStack0000000000000000 =
         FUN_0480eb20(unaff_x19[0x25],&stack0x00000018,
                      *(undefined8 *)Mono_Globalization_Unicode_NormalizationTableUtil_TypeInfo);
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(long **)(lStack0000000000000018 + 0x10) = unaff_x19;
    thunk_FUN_037aeb94();
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(lStack0000000000000018 + 0x18) = unaff_x20;
    thunk_FUN_037aeb94();
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(long *)(lStack0000000000000018 + 0x20) = lVar5;
    thunk_FUN_037aeb94((long *)(lStack0000000000000018 + 0x20),lVar5);
    (**(code **)(*unaff_x19 + 0x268))();
    FUN_04fafd58();
  }
  return;
}


