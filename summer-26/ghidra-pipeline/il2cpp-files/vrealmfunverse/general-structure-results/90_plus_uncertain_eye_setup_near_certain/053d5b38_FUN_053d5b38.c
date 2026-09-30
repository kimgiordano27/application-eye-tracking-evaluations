/*
FUNCTION_NAME: FUN_053d5b38
ENTRY_POINT: 053d5b38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_053d5b38(long param_1,byte param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 local_54 [4];
  
                    /* try { // try from 053d5b40 to 054d5b47 has its CatchHandler @ 053d6114 */
                    /* try { // try from 053d5b58 to 054d5b5f has its CatchHandler @ 053d6110 */
                    /* try { // try from 053d5b64 to 054d5b6b has its CatchHandler @ 053d60e0 */
  if ((DAT_066d09e0 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
                    /* try { // try from 053d5b7c to 054d5b83 has its CatchHandler @ 053d60f4 */
    FUN_02b3c81c(PTR_DAT_063208b8);
    FUN_02b3c81c(PTR_DAT_063208b0);
    DAT_066d09e0 = 1;
  }
  puVar10 = PTR_DAT_06312310;
                    /* try { // try from 053d5b9c to 054d5ba7 has its CatchHandler @ 053d60f0 */
  *(byte *)(param_1 + 0x51) = param_2;
  if (*(int *)(*(long *)(puVar10 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 053d5bb8 to 054d5bbf has its CatchHandler @ 053d60bc */
  uVar3 = FUN_04d94540(param_3,0,0);
  if ((uVar3 & 1) == 0) goto LAB_053d5de0;
                    /* try { // try from 053d5bcc to 054d5bd3 has its CatchHandler @ 053d612c */
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* try { // try from 053d5bd8 to 054d5bdf has its CatchHandler @ 053d6128 */
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),param_3);
  bVar2 = FUN_053d6074(param_3);
  uVar1 = param_2 - 3;
                    /* try { // try from 053d5bec to 054d5bef has its CatchHandler @ 053d6104 */
  *(byte *)(param_1 + 0x50) = bVar2 & 1;
  if (param_4 != 0) {
    if (*(char *)(param_4 + 0x3b) == '\0') {
      lVar4 = 0;
LAB_053d5c30:
      if (*(char *)(param_4 + 0x3c) == '\0') {
        lVar5 = 0;
LAB_053d5c60:
        if (*(char *)(param_4 + 0x3d) == '\0') goto LAB_053d5c8c;
        if ((*(long *)(param_4 + 0x30) != 0) && (*(int *)(*(long *)(param_4 + 0x30) + 0x10) != 0)) {
          if (uVar1 < 0xfffffffe) {
                    /* try { // try from 053d5fa4 to 054d5fa7 has its CatchHandler @ 053d61ac */
            uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
                    /* try { // try from 053d5fa8 to 054d5fab has its CatchHandler @ 053d61a8 */
                    /* try { // try from 053d5fac to 054d5faf has its CatchHandler @ 053d61a4 */
            uVar9 = FUN_02b3c908(uVar8,2);
                    /* try { // try from 053d5fb0 to 054d5fb3 has its CatchHandler @ 053d6164 */
                    /* try { // try from 053d5fb4 to 054d5fb7 has its CatchHandler @ 053d61a0 */
                    /* try { // try from 053d5fb8 to 054d5fbb has its CatchHandler @ 053d6148 */
                    /* try { // try from 053d5fbc to 054d5fbf has its CatchHandler @ 053d6190 */
            uVar8 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 053d5fc0 to 054d5fc3 has its CatchHandler @ 053d6150 */
                    /* try { // try from 053d5fc4 to 054d5fc7 has its CatchHandler @ 053d6140 */
                    /* try { // try from 053d5fc8 to 054d5fcb has its CatchHandler @ 053d610c */
            FUN_0275e13c(uVar9);
                    /* try { // try from 053d5fcc to 054d5fd3 has its CatchHandler @ 053d619c */
                    /* try { // try from 053d5fd4 to 054d5fd7 has its CatchHandler @ 053d612c */
            FUN_0275a400(uVar9,uVar8);
                    /* try { // try from 053d5fd8 to 054d5fdb has its CatchHandler @ 053d6128 */
                    /* try { // try from 053d5fdc to 054d5fe3 has its CatchHandler @ 053d615c */
                    /* try { // try from 053d5fe4 to 054d5fe7 has its CatchHandler @ 053d6120 */
            FUN_0275a434(uVar9,0,uVar8);
                    /* try { // try from 053d5fe8 to 054d5feb has its CatchHandler @ 053d60e8 */
                    /* try { // try from 053d5fec to 054d5ff3 has its CatchHandler @ 053d613c */
            FUN_0275e13c(param_4);
            uVar8 = *(undefined8 *)(param_4 + 0x30);
                    /* try { // try from 053d5ff4 to 054d5ff7 has its CatchHandler @ 053d611c */
                    /* try { // try from 053d5ff8 to 054d5ffb has its CatchHandler @ 053d6118 */
                    /* try { // try from 053d5ffc to 054d5fff has its CatchHandler @ 053d6110 */
            FUN_0275a400(uVar9,uVar8);
                    /* try { // try from 053d6000 to 054d6003 has its CatchHandler @ 053d6124 */
                    /* try { // try from 053d6004 to 054d6007 has its CatchHandler @ 053d60d0 */
                    /* try { // try from 053d6008 to 054d600b has its CatchHandler @ 053d6100 */
                    /* try { // try from 053d600c to 054d600f has its CatchHandler @ 053d60fc */
            FUN_0275a434(uVar9,1,uVar8);
                    /* try { // try from 053d6010 to 054d6013 has its CatchHandler @ 053d60cc */
                    /* try { // try from 053d6014 to 054d6017 has its CatchHandler @ 053d60f8 */
            puVar10 = OVRPlugin_OVRP_1_46_0_TypeInfo;
            goto LAB_053d6018;
          }
          lVar6 = FUN_053d6258();
          goto LAB_053d5cc0;
        }
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar9 = FUN_02b3c908(uVar8,1);
                    /* try { // try from 053d5ed4 to 054d5ed7 has its CatchHandler @ 053d62ac */
                    /* try { // try from 053d5ed8 to 054d5edf has its CatchHandler @ 053d621c */
        uVar8 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 053d5ee0 to 054d5ee3 has its CatchHandler @ 053d626c */
                    /* try { // try from 053d5ee4 to 054d5ee7 has its CatchHandler @ 053d620c */
                    /* try { // try from 053d5ee8 to 054d5eeb has its CatchHandler @ 053d6204 */
        FUN_0275e13c(uVar9);
                    /* try { // try from 053d5eec to 054d5eef has its CatchHandler @ 053d62ac */
                    /* try { // try from 053d5ef0 to 054d5ef3 has its CatchHandler @ 053d6200 */
                    /* try { // try from 053d5ef4 to 054d5ef7 has its CatchHandler @ 053d61f8 */
        FUN_0275a400(uVar9,uVar8);
                    /* try { // try from 053d5ef8 to 054d5efb has its CatchHandler @ 053d61f4 */
                    /* try { // try from 053d5efc to 054d5eff has its CatchHandler @ 053d5378 */
                    /* try { // try from 053d5f00 to 054d5f03 has its CatchHandler @ 053d61f0 */
                    /* try { // try from 053d5f04 to 054d5f07 has its CatchHandler @ 053d61ec */
        FUN_0275a434(uVar9,0,uVar8);
                    /* try { // try from 053d5f08 to 054d5f0b has its CatchHandler @ 053d626c */
                    /* try { // try from 053d5f0c to 054d5f0f has its CatchHandler @ 053d61d4 */
        puVar10 = OVRPlugin_OVRP_1_44_0_TypeInfo;
      }
      else {
        if ((*(long *)(param_4 + 0x28) != 0) && (*(int *)(*(long *)(param_4 + 0x28) + 0x10) != 0)) {
          if (0xfffffffd < uVar1) {
                    /* try { // try from 053d5c50 to 054d5c77 has its CatchHandler @ 053d6218 */
            lVar5 = FUN_053d6258();
            goto LAB_053d5c60;
          }
                    /* try { // try from 053d5f1c to 054d5f2b has its CatchHandler @ 053d61c8 */
          uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
                    /* try { // try from 053d5f2c to 054d5f2f has its CatchHandler @ 053d5378 */
          uVar9 = FUN_02b3c908(uVar8,2);
                    /* try { // try from 053d5f30 to 054d5f33 has its CatchHandler @ 053d61e0 */
                    /* try { // try from 053d5f38 to 054d5f5b has its CatchHandler @ 053d6198 */
          uVar8 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
          FUN_0275e13c(uVar9);
          FUN_0275a400(uVar9,uVar8);
                    /* try { // try from 053d5f5c to 054d5f5f has its CatchHandler @ 053d61c4 */
                    /* try { // try from 053d5f60 to 054d5f63 has its CatchHandler @ 053d61c0 */
                    /* try { // try from 053d5f64 to 054d5f67 has its CatchHandler @ 053d6188 */
          FUN_0275a434(uVar9,0,uVar8);
                    /* try { // try from 053d5f68 to 054d5f6b has its CatchHandler @ 053d61bc */
                    /* try { // try from 053d5f6c to 054d5f73 has its CatchHandler @ 053d61b8 */
          FUN_0275e13c(param_4);
          uVar8 = *(undefined8 *)(param_4 + 0x28);
                    /* try { // try from 053d5f74 to 054d5f77 has its CatchHandler @ 053d617c */
                    /* try { // try from 053d5f78 to 054d5f7b has its CatchHandler @ 053d61b4 */
                    /* try { // try from 053d5f7c to 054d5f7f has its CatchHandler @ 053d61b0 */
          FUN_0275a400(uVar9,uVar8);
                    /* try { // try from 053d5f80 to 054d5fa3 has its CatchHandler @ 053d6170 */
          FUN_0275a434(uVar9,1,uVar8);
          puVar10 = OVRPlugin_OVRP_1_45_0_TypeInfo;
LAB_053d6018:
                    /* try { // try from 053d6018 to 054d601b has its CatchHandler @ 053d60c8 */
          uVar8 = thunk_FUN_02ba3594(puVar10);
          goto LAB_053d6020;
        }
                    /* try { // try from 053d5e64 to 054d5e7b has its CatchHandler @ 053d6124 */
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar9 = FUN_02b3c908(uVar8,1);
                    /* try { // try from 053d5e7c to 054d5ed3 has its CatchHandler @ 053d5378 */
        uVar8 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
        FUN_0275e13c(uVar9);
        FUN_0275a400(uVar9,uVar8);
        FUN_0275a434(uVar9,0,uVar8);
        puVar10 = OVRPlugin_OVRP_1_43_0_TypeInfo;
      }
    }
    else {
      if ((*(long *)(param_4 + 0x20) != 0) && (*(int *)(*(long *)(param_4 + 0x20) + 0x10) != 0)) {
        lVar4 = FUN_053d6258();
        *(undefined1 *)(param_1 + 0xa8) = 1;
        goto LAB_053d5c30;
      }
      uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar9 = FUN_02b3c908(uVar8,1);
                    /* try { // try from 053d5e24 to 054d5e2b has its CatchHandler @ 053d60ec */
      uVar8 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
      FUN_0275e13c(uVar9);
                    /* try { // try from 053d5e40 to 054d5e47 has its CatchHandler @ 053d60dc */
      FUN_0275a400(uVar9,uVar8);
      FUN_0275a434(uVar9,0,uVar8);
      puVar10 = OVRPlugin_OVRP_1_42_0_TypeInfo;
    }
    uVar8 = thunk_FUN_02ba3594(puVar10);
LAB_053d6020:
                    /* try { // try from 053d6024 to 054d6027 has its CatchHandler @ 053d60b4 */
    uVar8 = FUN_0540ce80(uVar8,uVar9,0);
                    /* try { // try from 053d6028 to 054d602b has its CatchHandler @ 053d60f4 */
                    /* try { // try from 053d602c to 054d602f has its CatchHandler @ 053d60c0 */
                    /* try { // try from 053d6030 to 054d6033 has its CatchHandler @ 053d60f0 */
                    /* try { // try from 053d6034 to 054d6037 has its CatchHandler @ 053d60ec */
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
                    /* try { // try from 053d6038 to 054d603b has its CatchHandler @ 053d60dc */
    uVar9 = thunk_FUN_02b79644();
                    /* try { // try from 053d603c to 054d603f has its CatchHandler @ 053d60b8 */
                    /* try { // try from 053d6048 to 054d6057 has its CatchHandler @ 053d60ac */
    FUN_053f0c5c(uVar9,uVar8,0);
    uVar8 = FUN_0540c738(uVar9,0);
                    /* try { // try from 053d605c to 054d607f has its CatchHandler @ 053d60b0 */
    uVar9 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_47_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,uVar9);
  }
  lVar5 = 0;
  lVar4 = 0;
LAB_053d5c8c:
  if (uVar1 < 0xfffffffe) {
    plVar7 = (long *)thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo
                                       );
    FUN_053b71b0(plVar7,3,0);
                    /* try { // try from 053d5cb4 to 054d5cdf has its CatchHandler @ 053d6214 */
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
LAB_053d5cc0:
    plVar7 = (long *)thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo
                                       );
    FUN_053b71b0(plVar7,5,0);
  }
  if ((*(long *)(param_1 + 0x28) != 0) && (plVar7 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar7 + 0x188))
                      (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                       *(undefined8 *)(*plVar7 + 400));
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar8);
                    /* try { // try from 053d5d18 to 054d5d1f has its CatchHandler @ 053d61fc */
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = (**(code **)(*plVar7 + 0x188))
                        (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                         *(undefined8 *)(*plVar7 + 400));
                    /* try { // try from 053d5d30 to 054d5d37 has its CatchHandler @ 053d61d0 */
      *(undefined8 *)(param_1 + 0x38) = uVar8;
                    /* try { // try from 053d5d3c to 054d5d47 has its CatchHandler @ 053d61dc */
      thunk_FUN_02bb0e9c();
      if (lVar4 == 0) {
                    /* try { // try from 053d5d48 to 054d5d57 has its CatchHandler @ 053d61d8 */
        uVar8 = FUN_053d62d8(param_3);
        local_54[0] = 0;
        lVar4 = FUN_053db378(uVar8,local_54);
        if (lVar4 == 0) goto LAB_053d5e08;
        lVar4 = *(long *)(lVar4 + 0x10);
      }
                    /* try { // try from 053d5d60 to 054d5d67 has its CatchHandler @ 053d60d4 */
      plVar11 = (long *)(param_1 + 0xa0);
      *plVar11 = lVar4;
                    /* try { // try from 053d5d6c to 054d5d77 has its CatchHandler @ 053d60d8 */
      thunk_FUN_02bb0e9c(plVar11,lVar4);
      uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,*plVar11,*(undefined8 *)(*plVar7 + 400));
      *(undefined8 *)(param_1 + 0xb0) = uVar8;
      thunk_FUN_02bb0e9c();
                    /* try { // try from 053d5d98 to 054d5e03 has its CatchHandler @ 053d615c */
      if (0xfffffffd < uVar1) {
        lVar4 = *(long *)PTR_DAT_063208b0;
        if (lVar5 != 0) {
          lVar4 = lVar5;
        }
        *(long *)(param_1 + 0xb8) = lVar4;
        thunk_FUN_02bb0e9c();
        lVar4 = *(long *)PTR_DAT_063208b8;
        if (lVar6 != 0) {
          lVar4 = lVar6;
        }
        *(long *)(param_1 + 0xc0) = lVar4;
        thunk_FUN_02bb0e9c();
      }
LAB_053d5de0:
      if (param_4 != 0) {
        *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_4 + 0x38);
      }
      return;
    }
  }
LAB_053d5e08:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


