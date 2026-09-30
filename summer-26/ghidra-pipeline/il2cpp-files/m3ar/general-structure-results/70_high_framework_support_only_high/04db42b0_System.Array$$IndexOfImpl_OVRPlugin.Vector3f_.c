/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Vector3f>
ENTRY_POINT: 04db42b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04db45b0) */

void System_Array__IndexOfImpl<OVRPlugin_Vector3f>(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  int iVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_000000f8;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b8;
  
  System_Collections_ObjectModel_ReadOnlyCollection<EventSummary>__System_Collections_IList_set_Item
            (param_2,*(undefined8 *)(param_1 + 0x20));
  memcpy(&stack0x000000b0,&stack0x00000000,0x50);
  puVar1 = PTR_DAT_08f8a7d0;
  in_stack_00000050 = 0;
  in_stack_00000060 = &stack0x000001b8;
  in_stack_00000058 = &stack0x000000b0;
  do {
    uVar2 = FUN_0722c498(&stack0x000000b0,
                         *(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x50));
    plVar6 = in_stack_000000f8;
    if ((uVar2 & 1) == 0) goto LAB_04db4520;
    if (in_stack_000000f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *in_stack_000000f8;
    lVar7 = *(long *)puVar1;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04db4350;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_000000f8,lVar7,0);
LAB_04db4350:
    uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    uVar5 = FUN_086299f4(&stack0x00000190,0);
    uVar2 = FUN_07367c2c(uVar4,uVar5,0);
  } while ((uVar2 & 1) != 0);
  lVar8 = *plVar6;
  lVar7 = *(long *)puVar1;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04db43f0;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar6,lVar7,1);
LAB_04db43f0:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
  plVar6 = (long *)FUN_0862ccb8(uVar4,0);
  if (plVar6 == (long *)0x0) {
    uVar4 = FUN_087c1024(uVar4,0);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074fe038(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
LAB_04db4520:
      iVar10 = 0x13;
      goto LAB_04db4550;
    }
    uVar2 = FUN_087c0fac();
    if ((uVar2 & 1) == 0) {
      memcpy(&stack0x00000100,(void *)(unaff_x19 + 0x10),0x90);
      iVar10 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
      UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&stack0x00000100,iVar10,0);
      in_stack_00000198 = in_stack_00000008;
      in_stack_00000190 = in_stack_00000000;
      in_stack_000001a8 = in_stack_00000018;
      in_stack_000001a0 = in_stack_00000010;
      uVar2 = FUN_086299dc(&stack0x00000190,0);
      if ((uVar2 & 1) == 0) goto LAB_04db4520;
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
      lVar7 = FUN_0862ccb8(uVar4,0);
      if (lVar7 != 0) {
        FUN_03a90f00(0,*(undefined8 *)PTR_DAT_08f8c250,lVar7);
      }
    }
  }
  else {
    lVar7 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04db4538;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f8c250,0);
LAB_04db4538:
    (*(code *)*puVar3)(plVar6);
  }
  iVar10 = 3;
LAB_04db4550:
  FUN_0722c8e0(&stack0x000000b0,*(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x58));
  if ((((iVar10 == 0) || (iVar10 == 0x13)) && (uVar2 = FUN_087c0fac(), (uVar2 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


