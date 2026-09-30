/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.IsolatedJsonConvert$$SerializeObject
ENTRY_POINT: 05f83f10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05f84090) */
/* WARNING: Removing unreachable block (ram,0x05f84180) */

undefined8
Unity_Services_Matchmaker_Http_IsolatedJsonConvert__SerializeObject
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x26;
  long *unaff_x28;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  
  lVar1 = *unaff_x28;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar1 = *unaff_x28;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar6 = puVar3[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar3 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    FUN_04444ef4(lVar6,uVar7,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,0
                );
    plVar2 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
    *plVar2 = lVar6;
    LeanTween__value(plVar2,lVar6);
  }
  if (in_stack_000001d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar1 = *in_stack_000001d8;
  lVar8 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar1 = lVar1 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar1 = FUN_02dd004c(in_stack_000001d8);
LAB_05f83ff4:
  lVar1 = thunk_FUN_02db5310(*(undefined8 *)(lVar1 + 8),lVar8);
  (**(code **)(lVar1 + 8))(in_stack_000001d8,lVar6,lVar1);
  if (in_stack_000001d8 != (long *)0x0) {
    lVar1 = *in_stack_000001d8;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(in_stack_000001d8,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar3)(in_stack_000001d8,puVar3[1]);
  }
  if (in_stack_000001d0 != 0) {
    return *(undefined8 *)(in_stack_000001d0 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


