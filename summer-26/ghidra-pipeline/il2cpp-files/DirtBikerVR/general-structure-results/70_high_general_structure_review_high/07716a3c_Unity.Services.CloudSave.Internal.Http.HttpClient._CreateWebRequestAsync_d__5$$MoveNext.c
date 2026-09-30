/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Http.HttpClient.<CreateWebRequestAsync>d__5$$MoveNext
ENTRY_POINT: 07716a3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07716c94) */

void Unity_Services_CloudSave_Internal_Http_HttpClient_<CreateWebRequestAsync>d__5__MoveNext(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x26;
  long *in_stack_00000038;
  
  if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = FUN_0737f818(*(long *)(unaff_x19 + 0x1a0),0);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_07704c58();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar5 + 0x747) == '\0') {
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
    lVar5 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
          goto LAB_07716ae8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x26,0xd);
LAB_07716ae8:
    (*(code *)*puVar6)(in_stack_00000038,uVar2 & uVar3 & 1,puVar6[1]);
  }
  puVar1 = UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
  lVar5 = *(long *)UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar6[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar10 = *puVar6;
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_CapsuleCollider_var);
    FUN_056e0a20(lVar9,uVar10,*(undefined8 *)Internal_Cryptography_Pal_CertificateData_var,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar7 = lVar9;
    thunk_FUN_03afed3c(plVar7,lVar9);
  }
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *in_stack_00000038;
  lVar11 = *(long *)Meta_XR_ImmersiveDebugger_Manager_Category_var;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_07716be0;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  lVar5 = FUN_03ac43c4(in_stack_00000038);
LAB_07716be0:
  lVar5 = thunk_FUN_03aa9644(*(undefined8 *)(lVar5 + 8),lVar11);
  (**(code **)(lVar5 + 8))(in_stack_00000038,lVar9,lVar5);
  if (in_stack_00000038 != (long *)0x0) {
    lVar5 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07716c64;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_08488550,0);
LAB_07716c64:
    (*(code *)*puVar6)(in_stack_00000038,puVar6[1]);
  }
  return;
}


