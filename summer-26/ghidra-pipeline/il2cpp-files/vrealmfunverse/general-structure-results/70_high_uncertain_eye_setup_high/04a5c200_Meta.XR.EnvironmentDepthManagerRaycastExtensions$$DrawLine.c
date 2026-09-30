/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$DrawLine
ENTRY_POINT: 04a5c200
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthManagerRaycastExtensions__DrawLine(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  plVar2 = (long *)thunk_FUN_02b79548();
  if (plVar2 != (long *)0x0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a5c280;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar2,lVar5,0);
LAB_04a5c280:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
      }
      if ((((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) !=
            lVar5)) || (uVar7 = FUN_04a5e2c4(), (uVar7 & 1) == 0)) ||
         ((int)unaff_x20[4] <= *(int *)(unaff_x21 + 0x20))) goto LAB_04a5c31c;
      uVar4 = 0;
    }
    return uVar4;
  }
LAB_04a5c31c:
  uVar4 = FUN_04a5d5d8();
  return uVar4;
}


