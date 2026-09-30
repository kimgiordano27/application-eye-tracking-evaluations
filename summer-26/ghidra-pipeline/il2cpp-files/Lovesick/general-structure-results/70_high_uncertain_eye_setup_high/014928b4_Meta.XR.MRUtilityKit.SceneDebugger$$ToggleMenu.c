/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleMenu
ENTRY_POINT: 014928b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__ToggleMenu(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  long *unaff_x19;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (in_w8 == 0) {
    plVar4 = (long *)thunk_FUN_00d93c64();
    puVar3 = StringLiteral_6011;
    puVar2 = StringLiteral_720;
    puVar1 = Method_System_Xml_Schema_XmlListConverter_ToArray<double>__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uStack0000000000000004 = (undefined4)unaff_x19[5];
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000004);
    uVar6 = FUN_015f6780(*(undefined8 *)puVar3,uVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_014deea0(uVar5,uVar6,0,0);
  }
  else {
    if (unaff_x19[0xf] != 0) {
      FUN_0268f0f0();
      unaff_x19[0xf] = 0;
    }
    lVar7 = unaff_x19[6];
    *(undefined4 *)(unaff_x19 + 5) = 3;
    if (lVar7 != 0) {
      uStack000000000000000c = 3;
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),(long)&stack0x00000008 + 4,
                 *(undefined8 *)(lVar7 + 0x28));
    }
    (**(code **)(*unaff_x19 + 0x398))();
    if ((int)unaff_x19[5] == 3) {
      lVar7 = unaff_x19[6];
      *(undefined4 *)(unaff_x19 + 5) = 0;
      if (lVar7 != 0) {
        uStack0000000000000008 = 0;
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),&stack0x00000008,*(undefined8 *)(lVar7 + 0x28));
      }
    }
  }
  return;
}


