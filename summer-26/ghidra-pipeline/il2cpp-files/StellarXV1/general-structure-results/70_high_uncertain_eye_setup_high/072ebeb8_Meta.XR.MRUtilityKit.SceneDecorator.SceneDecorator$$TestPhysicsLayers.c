/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestPhysicsLayers
ENTRY_POINT: 072ebeb8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestPhysicsLayers(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  FUN_04077588(PTR_DAT_092c2118);
  *(undefined1 *)(unaff_x25 + 0xbd2) = 1;
  FUN_076bca34();
  lVar2 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_07290808();
  plVar4 = (long *)(unaff_x19 + 0x10);
  *plVar4 = lVar2;
  thunk_FUN_040ec700(plVar4,lVar2);
  lVar2 = *plVar4;
  uVar3 = thunk_FUN_040b4efc(*unaff_x24);
  FUN_0728fefc();
  puVar1 = PTR_DAT_092c2030;
  if (lVar2 != 0) {
    FUN_07291214(lVar2,uVar3,0);
    lVar2 = *(long *)(unaff_x19 + 0x10);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_0728ffd4();
    puVar1 = PTR_DAT_092c2038;
    if (lVar2 != 0) {
      FUN_0729134c(lVar2,uVar3,0);
      lVar2 = *(long *)(unaff_x19 + 0x10);
      uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_0729012c();
      puVar1 = PTR_DAT_092c2040;
      if (lVar2 != 0) {
        FUN_07291484(lVar2,uVar3,0);
        lVar2 = *(long *)(unaff_x19 + 0x10);
        uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_0729021c();
        if (lVar2 != 0) {
          FUN_072915bc(lVar2,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


