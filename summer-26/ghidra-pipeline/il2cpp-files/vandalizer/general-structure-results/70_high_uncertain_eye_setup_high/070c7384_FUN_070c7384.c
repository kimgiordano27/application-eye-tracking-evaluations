/*
FUNCTION_NAME: FUN_070c7384
ENTRY_POINT: 070c7384
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070c7384(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  ulong __n;
  int iVar11;
  undefined1 *__s;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auStack_60 [8];
  undefined1 local_58 [16];
  long local_48;
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
                    /* try { // try from 070c7384 to 071c738b has its CatchHandler @ 070c738c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 070c7350 with catch @ 070c738c
                       catch(type#2 @ 00000000) { ... } // from try @ 070c7384 with catch @ 070c738c
                        */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 070c73b4 to 071c74f3 has its CatchHandler @ 070c73b4
                       catch() { ... } // from try @ 070c73b4 with catch @ 070c73b4
                       catch() { ... } // from try @ 070c7510 with catch @ 070c73b4
                       catch() { ... } // from try @ 070c7694 with catch @ 070c73b4
                       catch() { ... } // from try @ 070c7738 with catch @ 070c73b4 */
  if ((DAT_07a5a951 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_BodyJointSet_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo);
    FUN_031f20f4(OVRPlugin_LogLevel_TypeInfo);
    FUN_031f20f4(PTR_DAT_075a5e60);
    FUN_031f20f4(PTR_DAT_075a5e68);
    auVar12 = FUN_031f20f4(OVRPlugin_HandStatus_TypeInfo);
    DAT_07a5a951 = 1;
  }
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  if (param_2 == 0) goto LAB_070c7624;
  plVar8 = (long *)FUN_070e5bf4(param_2,0);
  if (plVar8 == (long *)0x0) {
LAB_070c7444:
    plVar8 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo +
                     0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_070c7444;
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo) {
      plVar8 = (long *)0x0;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = plVar8;
  auVar12 = auVar3 << 0x40;
  if (param_1[0xa7] == 0) {
LAB_070c7624:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390(auVar12._0_8_,auVar12._8_8_);
  }
  iVar6 = FUN_047b0068(param_1[0xa7],plVar8,*(undefined8 *)OVRPlugin_LogLevel_TypeInfo);
  local_58 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
  uVar10 = local_58._8_8_;
  __n = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
  iVar11 = local_58._8_4_;
  if (iVar11 == 0) {
    memset((void *)0x0,0,__n);
    __s = (undefined1 *)0x0;
  }
  else {
    __s = auStack_60 + -(__n + 0xf & 0xfffffffffffffff0);
    memset(__s,0,__n);
    if (iVar11 < 0) {
      FUN_05e21fe0(0);
    }
  }
  auVar13 = FUN_070c5ce8(local_58,__s,uVar10 & 0xffffffff);
  piVar9 = auVar13._0_8_;
                    /* try { // try from 070c74f4 to 071c74fb has its CatchHandler @ 070c76a0 */
  if ((char)param_1[0x9f] != '\0') {
                    /* try { // try from 070c7500 to 071c750f has its CatchHandler @ 070c769c */
                    /* try { // try from 070c7510 to 071c768f has its CatchHandler @ 070c73b4 */
    (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
    auVar14 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
    if ((auVar14._0_8_ != 0) || (auVar14._8_4_ != (int)extraout_x1)) {
      (**(code **)(*param_1 + 0xac8))(param_1,0,extraout_x1,*(undefined8 *)(*param_1 + 0xad0));
    }
  }
  bVar5 = auVar13._8_4_ != 1;
  if ((char)param_1[0xa9] == '\0') {
    if ((bVar5) || (*(char *)((long)param_1 + 0x549) == '\0')) {
LAB_070c75cc:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_58._8_8_;
      local_58 = auVar4 << 0x40;
LAB_070c75d0:
      uVar7 = 1;
      goto LAB_070c75d4;
    }
    uVar10 = FUN_070c7644(local_58,*piVar9);
    if ((uVar10 & 1) == 0) goto LAB_070c75cc;
    FUN_070c5e74(local_58,*piVar9,0);
    if (iVar6 != *piVar9) goto LAB_070c75d0;
  }
  else {
    if ((!bVar5) && (*(char *)((long)param_1 + 0x549) == '\0')) {
      uVar10 = FUN_070c7644(local_58,iVar6);
      if ((uVar10 & 1) != 0) goto LAB_070c75fc;
    }
    uVar7 = FUN_070c7644(local_58,iVar6);
    uVar7 = uVar7 ^ 1;
LAB_070c75d4:
    FUN_070c5e74(local_58,iVar6,uVar7 & 1);
  }
  (**(code **)(*param_1 + 0xa38))
            (param_1,local_58._0_8_,local_58._8_8_,*(undefined8 *)(*param_1 + 0xa40));
LAB_070c75fc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


