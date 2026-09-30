/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 026a7400
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x22 + 0xce1) = 1;
  FUN_03e21f94();
  if (unaff_x19 != 0) {
    FUN_03f41b00();
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
    FUN_03f04548();
    FUN_03f04534();
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    puVar1 = StringLiteral_1583;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
    {
      FUN_01dde7f8();
    }
    FUN_03f48160();
    lVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    FUN_03ebd130(lVar3,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x20) = 1;
      *(undefined4 *)(lVar3 + 0x24) = 0xffffffff;
      *(long *)(unaff_x19 + 0x410) = lVar3;
      thunk_FUN_01e10808(unaff_x19 + 0x410,lVar3);
      lVar4 = *(long *)(unaff_x19 + 0x410);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8();
      }
      puVar2 = StringLiteral_2311;
      puVar1 = StringLiteral_2310;
      if (lVar4 != 0) {
        FUN_03f48160(lVar4,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
        if (unaff_x21 == 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01dde7f8();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1)
              == 0) {
            FUN_01dde7f8();
          }
          FUN_03f48160();
        }
        else {
          FUN_026a7054();
        }
        thunk_FUN_01de27b8(*(undefined8 *)puVar1);
        FUN_02df9178();
        FUN_0208fda4();
        thunk_FUN_01de27b8(*(undefined8 *)puVar2);
        FUN_02df9178();
        FUN_0208fda4();
        *(undefined8 *)(unaff_x19 + 1000) = 0;
        thunk_FUN_01e10808(unaff_x19 + 1000,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


