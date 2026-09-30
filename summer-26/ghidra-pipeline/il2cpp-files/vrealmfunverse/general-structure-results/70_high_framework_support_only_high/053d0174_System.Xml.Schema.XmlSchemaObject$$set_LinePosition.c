/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaObject$$set_LinePosition
ENTRY_POINT: 053d0174
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_19
*/


void System_Xml_Schema_XmlSchemaObject__set_LinePosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  int iVar14;
  int iVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar16;
  int iVar17;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000070;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xe58));
  FUN_02b3c81c(OVRPlugin_OVRP_1_119_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_11_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_120_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_121_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_122_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_123_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_124_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_125_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_126_0_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x9ba) = 1;
  puVar1 = OVRPlugin_OVRP_1_123_0_TypeInfo;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    return;
  }
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
  FUN_039a2904(lVar6,*(undefined8 *)puVar1);
  puVar3 = OVRPlugin_OVRP_1_120_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_118_0_TypeInfo;
  if (unaff_x21 != 0) {
    FUN_037a6fdc(&stack0x00000070);
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000020 = &stack0x00000030;
    in_stack_00000038 = in_stack_00000078;
    in_stack_00000030 = in_stack_00000070;
    in_stack_00000018 = 0;
    while (uVar7 = FUN_0472eaf4(&stack0x00000030,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      puVar16 = *(undefined8 **)(*(long *)(unaff_x20 + 0x28) + 0x18);
      in_stack_00000078 = (undefined8 *)0x0;
      in_stack_00000080 = 0;
      in_stack_00000070 = in_stack_00000040;
      thunk_FUN_02bb0e9c(&stack0x00000070);
      in_stack_00000078 = puVar16;
      thunk_FUN_02bb0e9c(&stack0x00000078,puVar16);
      in_stack_00000080 = in_stack_00000080 & 0xffffffff00000000;
      if (lVar6 == 0) {
LAB_053d0788:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_053d0788;
      uVar5 = *(uint *)(lVar6 + 0x18);
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar5 * 0x18;
        *(uint *)(lVar6 + 0x18) = uVar5 + 1;
        *(ulong *)(lVar11 + 0x30) = in_stack_00000080;
        *(undefined8 **)(lVar11 + 0x28) = in_stack_00000078;
        *(ulong *)(lVar11 + 0x20) = in_stack_00000070;
        thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
      }
      else {
        in_stack_00000058 = in_stack_00000078;
        in_stack_00000050 = in_stack_00000070;
        in_stack_00000060 = in_stack_00000080;
        FUN_039a3228(lVar6,&stack0x00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0472eaf0(&stack0x00000030,*(undefined8 *)puVar1);
    lVar11 = *(long *)(unaff_x20 + 0x48);
    if (lVar11 != 0) {
      iVar17 = 0;
      do {
        if ((*(long *)(lVar11 + 0x48) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar11 + 0x48) + 0x50), lVar12 == 0)) goto LAB_053d0784;
        iVar17 = iVar17 + 1;
        FUN_037a6fdc(&stack0x00000018,lVar12,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        while (uVar8 = FUN_0472eaf4(&stack0x00000030,*(undefined8 *)puVar2),
              uVar7 = in_stack_00000040, (uVar8 & 1) != 0) {
          lVar12 = FUN_053d699c(lVar11,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          puVar16 = *(undefined8 **)(lVar12 + 0x18);
          in_stack_00000020 = (undefined8 *)0x0;
          in_stack_00000028 = 0;
          in_stack_00000018 = uVar7;
          thunk_FUN_02bb0e9c(&stack0x00000018,uVar7);
          in_stack_00000020 = puVar16;
          thunk_FUN_02bb0e9c(&stack0x00000020,puVar16);
          in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,iVar17);
          if (lVar6 == 0) {
LAB_053d0494:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_053d0494;
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (uVar5 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar5 * 0x18;
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
            *(ulong *)(lVar12 + 0x30) = in_stack_00000028;
            *(undefined8 **)(lVar12 + 0x28) = in_stack_00000020;
            *(ulong *)(lVar12 + 0x20) = in_stack_00000018;
            thunk_FUN_02bb0e9c(lVar12 + 0x20,0);
          }
          else {
            in_stack_00000078 = in_stack_00000020;
            in_stack_00000070 = in_stack_00000018;
            in_stack_00000080 = in_stack_00000028;
            FUN_039a3228(lVar6,&stack0x00000070,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0472eaf0(&stack0x00000030,*(undefined8 *)puVar1);
        if (*(long *)(lVar11 + 0x48) == 0) goto LAB_053d0784;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x48) + 0x48);
      } while (lVar11 != 0);
    }
    puVar1 = OVRPlugin_OVRP_1_117_0_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_117_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar6 != 0) {
      FUN_039a4f04(lVar6,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                   *(undefined8 *)OVRPlugin_OVRP_1_122_0_TypeInfo);
      puVar2 = OVRPlugin_OVRP_1_125_0_TypeInfo;
      puVar1 = PTR_DAT_06312310;
      iVar17 = *(int *)(lVar6 + 0x18);
      if (iVar17 + -1 < 1) {
        return;
      }
      iVar14 = 0;
      do {
        iVar15 = iVar14;
        if (iVar14 < iVar17 + -1) {
          uVar5 = 0;
          do {
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar15,*(undefined8 *)puVar2);
            if (in_stack_00000018 == 0) goto LAB_053d0784;
            uVar9 = FUN_053e52fc(in_stack_00000018,0);
            iVar17 = iVar15 + 1;
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar17,*(undefined8 *)puVar2);
            if (in_stack_00000018 == 0) goto LAB_053d0784;
            uVar10 = FUN_053e52fc(in_stack_00000018,0);
            iVar4 = FUN_04c07ea0(uVar9,uVar10,0);
            if (iVar4 != 0) break;
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar15,*(undefined8 *)puVar2);
            puVar16 = in_stack_00000020;
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar17,*(undefined8 *)puVar2);
            iVar4 = FUN_04c07ea0(puVar16,in_stack_00000020,0);
            if (iVar4 != 0) break;
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar15,*(undefined8 *)puVar2);
            uVar7 = in_stack_00000018;
            FUN_039a2e9c(&stack0x00000018,lVar6,iVar17,*(undefined8 *)puVar2);
            if (uVar7 == 0) goto LAB_053d0784;
            FUN_053e5668(uVar7,in_stack_00000018,0);
            if ((uVar5 & 1) == 0) {
              FUN_039a2e9c(&stack0x00000018,lVar6,iVar17,*(undefined8 *)puVar2);
              if (in_stack_00000018 == 0) goto LAB_053d0784;
              uVar7 = FUN_053e561c(in_stack_00000018,0);
              if ((uVar7 & 1) != 0) goto LAB_053d0674;
              FUN_039a2e9c(&stack0x00000018,lVar6,iVar15,*(undefined8 *)puVar2);
              if (in_stack_00000018 == 0) goto LAB_053d0784;
              uVar9 = FUN_053e542c(in_stack_00000018,0);
              FUN_039a2e9c(&stack0x00000018,lVar6,iVar17,*(undefined8 *)puVar2);
              if (in_stack_00000018 == 0) goto LAB_053d0784;
              uVar10 = FUN_053e542c(in_stack_00000018,0);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
              }
              uVar5 = FUN_04d94540(uVar9,uVar10,0);
            }
            else {
LAB_053d0674:
              uVar5 = 1;
            }
            iVar15 = iVar17;
          } while (iVar17 < *(int *)(lVar6 + 0x18) + -1);
          if ((iVar14 <= iVar15) && ((uVar5 & 1) != 0)) {
            do {
              FUN_039a2e9c(&stack0x00000018,lVar6,iVar14,*(undefined8 *)puVar2);
              if (in_stack_00000018 == 0) goto LAB_053d0784;
              FUN_053e5634(in_stack_00000018,1,0);
              iVar14 = iVar14 + 1;
            } while (iVar14 <= iVar15);
          }
        }
        iVar17 = *(int *)(lVar6 + 0x18);
        iVar14 = iVar15 + 2;
        if (iVar17 + -1 <= iVar14) {
          return;
        }
      } while( true );
    }
  }
LAB_053d0784:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


