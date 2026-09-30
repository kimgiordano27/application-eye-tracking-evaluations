/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 03393e3c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool OVRPlugin_Media__SyncMrcFrame(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar7;
  undefined8 unaff_x26;
  long *unaff_x28;
  
  if ((in_w11 < (uint)in_x10) || (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1)) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    unaff_x26 = FUN_03358c64();
  }
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03393ee0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar7,*unaff_x28,1);
LAB_03393ee0:
    (*(code *)*puVar3)(plVar7,1,unaff_x26);
    if ((unaff_x19 != 0) && (unaff_x21 != 0)) {
      plVar7 = *(long **)(unaff_x20 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_03393f00;
      (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
      OVRPlugin_LogCallback2DelegateType__Invoke();
    }
    if (unaff_x23 != 0) {
      if (*(char *)(unaff_x23 + 0x38) == '\0') {
        lVar4 = *(long *)(unaff_x20 + 0x20);
        uVar2 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_Fixed2<float4>__ctor__);
        FUN_0338dbd8();
        if (lVar4 == 0) goto LAB_03393f00;
        FUN_0335ff70(lVar4,uVar2,0);
        bVar1 = *(char *)(unaff_x23 + 0x38) != '\0';
      }
      else {
        bVar1 = true;
      }
      return bVar1;
    }
  }
LAB_03393f00:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


