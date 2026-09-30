/*
FUNCTION_NAME: FUN_070c6638
ENTRY_POINT: 070c6638
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void FUN_070c6638(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong extraout_x1;
  ulong __n;
  long lVar6;
  undefined1 *__s;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  uStack_70 = param_3;
  if ((DAT_07a5a950 & 1) == 0) {
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SetSkyboxOverride_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo);
    FUN_031f20f4(OVRPlugin_<>c__DisplayClass537_0_TypeInfo);
    FUN_031f20f4(PTR_DAT_075a5e60);
    FUN_031f20f4(OVRPlugin_BodyJointLocation_TypeInfo);
    DAT_07a5a950 = 1;
  }
  (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
  __n = -(extraout_x1 >> 0x1f & 1) & 0xfffffffc00000000 | (extraout_x1 & 0xffffffff) << 2;
  if ((extraout_x1 & 0xffffffff) == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    __s = auStack_80 + -(__n + 0xf & 0xfffffffffffffff0);
  }
  memset(__s,0,__n);
  if ((int)extraout_x1 < 0) {
    FUN_05e21fe0(0);
  }
  auVar8 = FUN_070c5ce8(&local_78,__s,extraout_x1 & 0xffffffff);
  puVar3 = OVRPlugin_<>c__DisplayClass537_0_TypeInfo;
  puVar2 = OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo;
  lVar6 = param_1[0xa7];
  if (lVar6 != 0) {
    iVar7 = 0;
    while( true ) {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* try { // try from 070c6760 to 071c6783 has its CatchHandler @ 070c6e34 */
      iVar4 = FUN_070dcbc0(auVar8._0_8_,auVar8._8_8_,iVar7,*(undefined8 *)puVar3);
      if (param_1[0xa7] == 0) break;
      lVar6 = FUN_047af170(param_1[0xa7],iVar7,*(undefined8 *)puVar2);
                    /* try { // try from 070c6784 to 071c678f has its CatchHandler @ 070c6e04 */
      if (lVar6 == 0) break;
      uVar5 = FUN_06fc56bc(lVar6,0);
      if (iVar4 == -1) {
                    /* try { // try from 070c67a4 to 071c67ab has its CatchHandler @ 070c6ddc */
        uVar5 = uVar5 & 0xfffffff7;
      }
      else {
        uVar5 = uVar5 | 8;
      }
      FUN_06fc56c4(lVar6,uVar5,0);
                    /* try { // try from 070c67bc to 071c67c7 has its CatchHandler @ 070c6dc8 */
      if ((param_1[0xa7] == 0) ||
         (lVar6 = FUN_047af170(param_1[0xa7],iVar7,*(undefined8 *)puVar2), lVar6 == 0)) break;
                    /* try { // try from 070c67cc to 071c67ef has its CatchHandler @ 070c6df8 */
      FUN_06fc19b8(lVar6,0x20,0);
      lVar6 = param_1[0xa7];
      iVar7 = iVar7 + 1;
      if (lVar6 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


