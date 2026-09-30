/*
FUNCTION_NAME: Oculus.Interaction.PointableCanvasModule.PointerImpl$$SetPosition
ENTRY_POINT: 051bc9f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Oculus_Interaction_PointableCanvasModule_PointerImpl__SetPosition(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x21;
  
  uVar2 = (*(code *)*param_1)();
  puVar1 = PTR_DAT_067c9338;
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)PTR_DAT_067da2c0;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050e4454(uVar6,0);
    uVar2 = FUN_050ed374();
    uVar6 = 0;
    if ((uVar2 & 1) != 0) {
      plVar4 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,4);
      lVar8 = *(long *)(puVar1 + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(puVar1 + 0xe0));
      }
      lVar8 = FUN_050e4454(lVar8 + 0x20,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((lVar8 != 0) &&
         (lVar5 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_051bcc7c:
        uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar6,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar8;
        lVar8 = FUN_050e4454(*(long *)(puVar1 + 0x48) + 0x20,0);
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_051bcc7c;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = lVar8;
          lVar8 = FUN_050e4454(*(long *)(puVar1 + 0x48) + 0x20,0);
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_051bcc7c;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar8;
            lVar8 = FUN_050e4454(*(long *)(puVar1 + 0x48) + 0x20,0);
            if ((lVar8 != 0) &&
               (lVar5 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_051bcc7c;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar8;
              uVar6 = FUN_050ef4b8();
              return uVar6;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
  else {
    lVar8 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Func<NamedValue,_string>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_051bcbf0;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_051bcbf0:
    uVar6 = (*(code *)*puVar3)();
    lVar8 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_051bcc4c;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_051bcc4c:
    uVar2 = (*(code *)*puVar3)();
    if ((uVar2 & 1) != 0) {
      thunk_FUN_02f6ef30(
                        UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                        );
      uVar6 = thunk_FUN_02f45270();
      uVar7 = thunk_FUN_02f6ef30(System_Func<OVRBone,_bool>_TypeInfo);
      FUN_0515dff4(uVar6,uVar7,0);
      uVar7 = thunk_FUN_02f6ef30(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar6,uVar7);
    }
  }
  return uVar6;
}


