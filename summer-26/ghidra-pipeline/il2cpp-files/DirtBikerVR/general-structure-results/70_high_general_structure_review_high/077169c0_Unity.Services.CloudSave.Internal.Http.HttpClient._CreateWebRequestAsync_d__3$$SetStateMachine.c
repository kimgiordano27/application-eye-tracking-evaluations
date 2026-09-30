/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Http.HttpClient.<CreateWebRequestAsync>d__3$$SetStateMachine
ENTRY_POINT: 077169c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07716c94) */

void Unity_Services_CloudSave_Internal_Http_HttpClient_<CreateWebRequestAsync>d__3__SetStateMachine
               (code *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x26;
  long *in_stack_00000038;
  
  (*param_1)();
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *in_stack_00000038;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_07716a2c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x26,0xb);
LAB_07716a2c:
  (*(code *)*puVar4)(in_stack_00000038,0,puVar4[1]);
  if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar7 = FUN_0737f818(*(long *)(unaff_x19 + 0x1a0),0);
  if ((uVar7 & 1) != 0) {
    lVar6 = FUN_07704c58();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar6 + 0x747) == '\0') {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar2 = FUN_0770871c();
    }
    else {
      uVar2 = 1;
    }
    if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = FUN_07383860(*(long *)(unaff_x19 + 0x1a0),0);
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *in_stack_00000038;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
          goto LAB_07716ae8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x26,0xd);
LAB_07716ae8:
    (*(code *)*puVar4)(in_stack_00000038,uVar2 & uVar3 & 1,puVar4[1]);
  }
  puVar1 = UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
  lVar6 = *(long *)UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar4[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar10 = *puVar4;
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_CapsuleCollider_var);
    FUN_056e0a20(lVar9,uVar10,*(undefined8 *)Internal_Cryptography_Pal_CertificateData_var,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_03afed3c(plVar5,lVar9);
  }
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *in_stack_00000038;
  lVar11 = *(long *)Meta_XR_ImmersiveDebugger_Manager_Category_var;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_07716be0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_03ac43c4(in_stack_00000038);
LAB_07716be0:
  lVar6 = thunk_FUN_03aa9644(*(undefined8 *)(lVar6 + 8),lVar11);
  (**(code **)(lVar6 + 8))(in_stack_00000038,lVar9,lVar6);
  if (in_stack_00000038 != (long *)0x0) {
    lVar6 = *in_stack_00000038;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07716c64;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_08488550,0);
LAB_07716c64:
    (*(code *)*puVar4)(in_stack_00000038,puVar4[1]);
  }
  return;
}


