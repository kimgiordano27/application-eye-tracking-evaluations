/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Http.HttpClient.<CreateHttpClientResponse>d__4$$SetStateMachine
ENTRY_POINT: 077166dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07716c94) */

void Unity_Services_CloudSave_Internal_Http_HttpClient_<CreateHttpClientResponse>d__4__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000090;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xa80));
  FUN_03a8a718(PTR_DAT_08503fe8);
  FUN_03a8a718(PTR_DAT_08504428);
  FUN_03a8a718(PTR_DAT_084f0f50);
  FUN_03a8a718(PTR_DAT_08488550);
  FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Category_var);
  FUN_03a8a718(PTR_DAT_084f1d60);
  FUN_03a8a718(UnityEngine_Rendering_HighDefinition_CelestialBodyData_var);
  FUN_03a8a718(PTR_DAT_084887a0);
  FUN_03a8a718(Internal_Cryptography_Pal_CertificateData_var);
  FUN_03a8a718(UnityEngine_Animations_Rigging_ChainIKConstraintData_var);
  FUN_03a8a718(Unity_Netcode_ChangeOwnershipMessage_var);
  *(undefined1 *)(unaff_x19 + 0xba9) = 1;
  puVar1 = PTR_DAT_084887a0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if (unaff_x20 != 0) {
    lVar6 = FUN_076a5bb8();
    lVar7 = FUN_076a5bb8();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    lVar8 = FUN_076f414c(lVar6,0);
    if ((lVar8 == 0) || (uVar9 = FUN_076dd300(lVar8,0), (uVar9 & 1) == 0)) {
      FUN_076e4748();
      if (unaff_x25 == 0) goto LAB_07716c90;
      in_stack_00000038 = (long *)FUN_04713d98();
      _in_stack_00000020 = FUN_077164dc();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000018 = *(undefined8 *)(lVar6 + 0x1a0);
      FUN_0771664c(in_stack_00000020,&stack0x00000030,&stack0x00000018,&stack0x00000020);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(in_stack_00000030 + 0x28) = in_stack_00000090;
      thunk_FUN_03afed3c();
      plVar3 = in_stack_00000038;
      puVar1 = PTR_DAT_084f0f50;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *in_stack_00000038;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_084f0f50) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_077168dc;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_084f0f50,9);
LAB_077168dc:
      (*(code *)*puVar10)(plVar3,&stack0x00000020,puVar10[1]);
      plVar3 = in_stack_00000038;
      puVar2 = PTR_DAT_084f1d60;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *in_stack_00000038;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_084f1d60) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_07716948;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_084f1d60,0);
LAB_07716948:
      (*(code *)*puVar10)(plVar3);
      plVar3 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *in_stack_00000038;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_077169bc;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)puVar2,4);
LAB_077169bc:
      (*(code *)*puVar10)(plVar3);
      plVar3 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar12 = *in_stack_00000038;
      lVar8 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
            goto LAB_07716a2c;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,lVar8,0xb);
LAB_07716a2c:
      (*(code *)*puVar10)(plVar3,0,puVar10[1]);
      if (*(long *)(lVar6 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar9 = FUN_0737f818(*(long *)(lVar6 + 0x1a0),0);
      if ((uVar9 & 1) != 0) {
        lVar8 = FUN_07704c58(lVar6);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(char *)(lVar8 + 0x747) == '\0') {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar4 = FUN_0770871c(lVar7);
        }
        else {
          uVar4 = 1;
        }
        plVar3 = in_stack_00000038;
        if (*(long *)(lVar6 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = FUN_07383860(*(long *)(lVar6 + 0x1a0),0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar7 = *plVar3;
        lVar6 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
              goto LAB_07716ae8;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(plVar3,lVar6,0xd);
LAB_07716ae8:
        (*(code *)*puVar10)(plVar3,uVar4 & uVar5 & 1,puVar10[1]);
      }
      plVar3 = in_stack_00000038;
      puVar1 = UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
      lVar6 = *(long *)UnityEngine_Animations_Rigging_ChainIKConstraintData_var;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar6 = *(long *)puVar1;
      }
      puVar10 = *(undefined8 **)(lVar6 + 0xb8);
      lVar7 = puVar10[1];
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar14 = *puVar10;
        lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_CapsuleCollider_var);
        FUN_056e0a20(lVar7,uVar14,*(undefined8 *)Internal_Cryptography_Pal_CertificateData_var,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar11 = lVar7;
        thunk_FUN_03afed3c(plVar11,lVar7);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar3;
      lVar8 = *(long *)Meta_XR_ImmersiveDebugger_Manager_Category_var;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar6 = lVar6 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_07716be0;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_03ac43c4(plVar3);
LAB_07716be0:
      lVar6 = thunk_FUN_03aa9644(*(undefined8 *)(lVar6 + 8),lVar8);
      (**(code **)(lVar6 + 8))(plVar3,lVar7,lVar6);
      plVar3 = in_stack_00000038;
      if (in_stack_00000038 != (long *)0x0) {
        lVar6 = *in_stack_00000038;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08488550) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_07716c64;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_08488550,0);
LAB_07716c64:
        (*(code *)*puVar10)(plVar3,puVar10[1]);
      }
    }
    return;
  }
LAB_07716c90:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


