/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.IsolatedJsonConvert$$SerializeObject
ENTRY_POINT: 05f83f44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05f84090) */
/* WARNING: Removing unreachable block (ram,0x05f84180) */

undefined8 Unity_Services_Matchmaker_Http_IsolatedJsonConvert__SerializeObject(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x26;
  long *unaff_x28;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  
  thunk_FUN_02df485c();
  uVar6 = **(undefined8 **)(*unaff_x28 + 0xb8);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
  FUN_04444ef4(uVar1,uVar6,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  LeanTween__value(puVar2,uVar1);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *unaff_x19;
  lVar7 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02dd004c();
LAB_05f83ff4:
  lVar3 = thunk_FUN_02db5310(*(undefined8 *)(lVar3 + 8),lVar7);
  (**(code **)(lVar3 + 8))();
  if (in_stack_000001d8 != (long *)0x0) {
    lVar3 = *in_stack_000001d8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_000001d8,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar2)(in_stack_000001d8,puVar2[1]);
  }
  if (in_stack_000001d0 != 0) {
    return *(undefined8 *)(in_stack_000001d0 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


