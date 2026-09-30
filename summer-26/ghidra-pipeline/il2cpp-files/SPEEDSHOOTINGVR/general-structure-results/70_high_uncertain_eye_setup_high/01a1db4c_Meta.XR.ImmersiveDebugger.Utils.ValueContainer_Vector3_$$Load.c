/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$Load
ENTRY_POINT: 01a1db4c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__Load(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int in_w10;
  long *unaff_x19;
  long unaff_x20;
  code *pcVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  if (in_w10 == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar2 = FUN_01d5e86c();
  uVar3 = FUN_01d5e86c(*unaff_x23,0);
  uVar4 = FUN_01d603ec(uVar2,uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    uVar2 = **(undefined8 **)(lVar6 + 0xc0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x22);
    }
    plVar5 = (long *)FUN_01d5e86c(uVar2,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    uVar3 = thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0234bb30);
    FUN_01c44908(*(undefined8 *)PTR_DAT_0234d6b0,uVar2,uVar3,0);
  }
  else {
    plVar5 = (long *)*unaff_x19;
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_0234be00)) {
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar6 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_0103c244(lVar7);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar6 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((uVar1 & 1) == 0) {
        FUN_0103c244(lVar6);
      }
      (*pcVar8)();
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      FUN_01a264bc();
    }
    else {
      FUN_01c52818(plVar5,(int)unaff_x19[1],*(uint *)((long)unaff_x19 + 0xc) & 0x7fffffff,0);
    }
  }
  return;
}


