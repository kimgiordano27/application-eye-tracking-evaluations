/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Vector4f>
ENTRY_POINT: 04db433c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04db45b0) */

void System_Array__IndexOfImpl<OVRPlugin_Vector4f>(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  int iVar8;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_000000f8;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b8;
  
  do {
    puVar1 = (undefined8 *)FUN_0406ae20(param_1,param_2,param_3);
    while( true ) {
      uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
      uVar3 = FUN_086299f4(&stack0x00000190,0);
      uVar4 = FUN_07367c2c(uVar2,uVar3,0);
      if ((uVar4 & 1) == 0) {
        lVar6 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto LAB_04db43b0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04db4398;
      }
      uVar4 = FUN_0722c498(&stack0x000000b0,
                           *(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x50));
      if ((uVar4 & 1) == 0) goto LAB_04db4520;
      if (in_stack_000000f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *in_stack_000000f8;
      param_2 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      unaff_x20 = in_stack_000000f8;
      if (uVar4 == 0) break;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      while (*(long *)(piVar7 + -2) != param_2) {
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
        if (uVar4 == 0) goto LAB_04db4334;
      }
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
    }
LAB_04db4334:
    param_3 = 0;
    param_1 = in_stack_000000f8;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_04db4398:
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
      goto LAB_04db43f0;
    }
  }
LAB_04db43b0:
  puVar1 = (undefined8 *)FUN_0406ae20(unaff_x20,*unaff_x22,1);
LAB_04db43f0:
  uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  plVar5 = (long *)FUN_0862ccb8(uVar2,0);
  if (plVar5 == (long *)0x0) {
    uVar2 = FUN_087c1024(uVar2,0);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_074fe038(uVar2,0,0);
    if ((uVar4 & 1) == 0) {
LAB_04db4520:
      iVar8 = 0x13;
      goto LAB_04db4550;
    }
    uVar4 = FUN_087c0fac();
    if ((uVar4 & 1) == 0) {
      memcpy(&stack0x00000100,(void *)(unaff_x19 + 0x10),0x90);
      iVar8 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar8 + 1;
      UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&stack0x00000100,iVar8,0);
      in_stack_00000198 = in_stack_00000008;
      in_stack_00000190 = in_stack_00000000;
      in_stack_000001a8 = in_stack_00000018;
      in_stack_000001a0 = in_stack_00000010;
      uVar4 = FUN_086299dc(&stack0x00000190,0);
      if ((uVar4 & 1) == 0) goto LAB_04db4520;
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
      lVar6 = FUN_0862ccb8(uVar2,0);
      if (lVar6 != 0) {
        FUN_03a90f00(0,*(undefined8 *)PTR_DAT_08f8c250,lVar6);
      }
    }
  }
  else {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04db4538;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8c250,0);
LAB_04db4538:
    (*(code *)*puVar1)(plVar5);
  }
  iVar8 = 3;
LAB_04db4550:
  FUN_0722c8e0(&stack0x000000b0,*(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x58));
  if ((((iVar8 == 0) || (iVar8 == 0x13)) && (uVar4 = FUN_087c0fac(), (uVar4 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


