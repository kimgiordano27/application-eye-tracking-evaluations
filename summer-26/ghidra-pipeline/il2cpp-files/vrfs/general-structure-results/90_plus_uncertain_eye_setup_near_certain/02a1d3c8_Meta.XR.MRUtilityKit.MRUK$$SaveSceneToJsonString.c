/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 02a1d3c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_06deba20;
  if (6 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[10] = param_1;
    param_2 = thunk_FUN_01656ef8();
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dfde58;
    if (*(uint *)(unaff_x19 + 3) < 8) goto LAB_02a1d7b0;
    unaff_x19[0xb] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0xb,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e34b40;
    if (*(uint *)(unaff_x19 + 3) < 9) goto LAB_02a1d7b0;
    unaff_x19[0xc] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0xc,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dca800;
    if (*(uint *)(unaff_x19 + 3) < 10) goto LAB_02a1d7b0;
    unaff_x19[0xd] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0xd,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc3260;
    if (*(uint *)(unaff_x19 + 3) < 0xb) goto LAB_02a1d7b0;
    unaff_x19[0xe] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0xe,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e49ed8;
    if (*(uint *)(unaff_x19 + 3) < 0xc) goto LAB_02a1d7b0;
    unaff_x19[0xf] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0xf,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e69ce0;
    if (*(uint *)(unaff_x19 + 3) < 0xd) goto LAB_02a1d7b0;
    unaff_x19[0x10] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0x10,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e52aa8;
    if (*(uint *)(unaff_x19 + 3) < 0xe) goto LAB_02a1d7b0;
    unaff_x19[0x11] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0x11,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e4acf0;
    if (*(uint *)(unaff_x19 + 3) < 0xf) goto LAB_02a1d7b0;
    unaff_x19[0x12] = param_3;
    param_2 = thunk_FUN_01656ef8(unaff_x19 + 0x12,param_3);
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == 0) goto LAB_02a1d7b4;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e60278;
    if (0xf < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x13] = param_3;
      param_2 = thunk_FUN_01656ef8(unaff_x19 + 0x13,param_3);
      lVar4 = *(long *)puVar1;
      if (lVar4 == 0) {
        param_3 = 0;
      }
      else {
        param_2 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
        if (param_2 == 0) {
LAB_02a1d7b4:
          uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar5,0);
        }
        param_3 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_06d8e7f0;
      if (0x10 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x14] = param_3;
        thunk_FUN_01656ef8();
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
        thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar1 + 0xb8));
        if (DAT_07235137 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06d8e7f0);
          DAT_07235137 = '\x01';
        }
        puVar2 = PTR_DAT_06de4918;
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar4 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0xb8);
        lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_02112400(lVar4,uVar5,*(undefined8 *)PTR_DAT_06dca338);
          plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *plVar3 = lVar4;
          thunk_FUN_01656ef8(plVar3,lVar4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
  }
LAB_02a1d7b0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(param_2,param_3);
}


