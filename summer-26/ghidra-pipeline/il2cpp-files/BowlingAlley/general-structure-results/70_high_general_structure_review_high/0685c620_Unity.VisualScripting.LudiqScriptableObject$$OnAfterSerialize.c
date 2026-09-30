/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$OnAfterSerialize
ENTRY_POINT: 0685c620
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Unity_VisualScripting_LudiqScriptableObject__OnAfterSerialize(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x21;
  
  lVar1 = FUN_06becffc();
  if (unaff_x21 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
LAB_0685c7d8:
      uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
    if ((int)unaff_x21[3] != 0) {
      unaff_x21[4] = lVar1;
      thunk_FUN_0333a630(unaff_x21 + 4,lVar1);
      if (*unaff_x19 == 0) goto LAB_0685c788;
      lVar1 = FUN_06becffc(*unaff_x19,0);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0))
      goto LAB_0685c7d8;
      if (1 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[5] = lVar1;
        thunk_FUN_0333a630(unaff_x21 + 5,lVar1);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06bb3188(*(undefined8 *)
                      Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Value__
                    );
        return *unaff_x19;
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_0685c788:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


