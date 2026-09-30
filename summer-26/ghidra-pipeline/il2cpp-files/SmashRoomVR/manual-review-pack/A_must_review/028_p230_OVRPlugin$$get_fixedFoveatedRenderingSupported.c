/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 03155ec8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_6;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */

void OVRPlugin__get_fixedFoveatedRenderingSupported(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 unaff_x22;
  undefined8 in_stack_00000028;
  
  puVar1 = PTR_DAT_03d803d0;
  plVar2 = (long *)(*param_1)();
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03155f3c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(plVar2,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__
                          ,0);
LAB_03155f3c:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03156028;
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03156000;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)puVar1,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    unaff_x22 = FUN_02edd6e8(unaff_x22,*(undefined8 *)(lVar5 + 0x18),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(plVar2,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_0315601c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar2 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar4 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar4 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar4,unaff_x22,0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


