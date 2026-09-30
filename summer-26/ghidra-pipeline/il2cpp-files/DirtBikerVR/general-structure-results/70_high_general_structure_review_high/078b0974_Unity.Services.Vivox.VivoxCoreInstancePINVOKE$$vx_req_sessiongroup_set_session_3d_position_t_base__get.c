/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_base__get
ENTRY_POINT: 078b0974
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_base__get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x911) = 1;
  puVar5 = System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo;
  puVar4 = System_Collections_Generic_List<Product>_TypeInfo;
  puVar3 = System_Collections_Generic_List<ProcessPort>_TypeInfo;
  puVar2 = System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo;
  puVar1 = PTR_DAT_08488b88;
  iVar14 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (iVar14 == 0) goto LAB_078b0a64;
  if (iVar14 != 1) {
    piVar10 = unaff_x19 + 0xe;
    piVar10[0] = 0;
    piVar10[1] = 0;
    unaff_x19[0xc] = 1;
    thunk_FUN_03afed3c(piVar10,0);
    goto LAB_078b0b2c;
  }
  in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x14);
  iVar14 = -1;
  unaff_x19[0x14] = 0;
  unaff_x19[0x15] = 0;
  *unaff_x19 = -1;
  do {
    FUN_0666e9a8(&stack0x00000020,0);
    do {
      unaff_x19[0xc] = unaff_x19[0xc] + 1;
LAB_078b0b2c:
      if (*(long *)(unaff_x19 + 0xe) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0xe) + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(*(long *)(lVar11 + 0x58) + 0x30) < *(int *)(lVar8 + 0x30)) {
          uVar13 = thunk_FUN_03af1434(PTR_DAT_08486858);
          lVar8 = FUN_03a8a804(uVar13,4);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
          FUN_0350a83c(lVar8,uVar13);
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
          FUN_0350a870(lVar8,0,uVar13);
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
          FUN_0350a83c(lVar8,uVar13);
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
          FUN_0350a870(lVar8,1,uVar13);
          puVar1 = PTR_DAT_08486760;
          if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uStack0000000000000004 = *(undefined4 *)(*(long *)(lVar11 + 0x58) + 0x30);
          uVar13 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
          FUN_0350a83c(lVar8,uVar13);
          FUN_0350a870(lVar8,2,uVar13);
          if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar13 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48));
          FUN_0350a83c(lVar8,uVar13);
          FUN_0350a870(lVar8,3,uVar13);
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
          uVar13 = FUN_065ce7dc(uVar13,lVar8,0);
          thunk_FUN_03af1434(PTR_DAT_08493908);
          uVar7 = thunk_FUN_03ac74bc();
          FUN_078bbac4(uVar7,uVar13,0xc,0);
          lVar11 = *(long *)(lVar11 + 0xa0);
          if (lVar11 != 0) {
            uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
            FUN_0587ddbc(lVar11,uVar7,uVar13);
          }
          uVar13 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar7,uVar13);
        }
LAB_078b0bcc:
        *unaff_x19 = -2;
        piVar10 = unaff_x19 + 0xe;
        piVar10[0] = 0;
        piVar10[1] = 0;
        thunk_FUN_03afed3c(piVar10,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0666d184(unaff_x19 + 2,0);
        return;
      }
      if (3 < unaff_x19[0xc]) goto LAB_078b0bcc;
      unaff_x19[0x10] = 0;
      if (iVar14 == 0) {
LAB_078b0a64:
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        iVar14 = -1;
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        *unaff_x19 = -1;
      }
      else {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar12 = *(long **)(lVar11 + 0x80);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar8 = *plVar12;
        uVar13 = *(undefined8 *)(unaff_x19 + 10);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_078b0a8c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar2,7);
LAB_078b0a8c:
        lVar8 = (*(code *)*puVar6)(plVar12,uVar13,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000028 = FUN_058b71ec(lVar8,*(undefined8 *)puVar5);
        uVar9 = FUN_0587c6c4(&stack0x00000028,*(undefined8 *)puVar4);
        if ((uVar9 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e3254(unaff_x19 + 2,&stack0x00000028);
          return;
        }
      }
      uVar13 = FUN_0587c704(&stack0x00000028,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar13;
      thunk_FUN_03afed3c();
    } while (unaff_x19[0x10] != 1);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = FUN_078adb7c(0x3ff0000000000000,lVar11);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000020 = FUN_067c4bec(lVar8,0);
    uVar9 = FUN_0666e8e0(&stack0x00000020,0);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e6818(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  } while( true );
}


