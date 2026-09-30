/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 07c9e694
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  
  uVar3 = FUN_095258d0();
  FUN_07c09014(&stack0x00000050,uVar3,0,0);
  uStack0000000000000084 = (undefined4)uStack0000000000000064;
  in_stack_00000088 = SUB84(uStack0000000000000064,4);
  in_stack_00000080 = uStack0000000000000060;
  in_stack_00000078 = uStack0000000000000058;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000070 = in_stack_00000050;
  *(ulong *)(unaff_x20 + 0x1c) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
  *(undefined8 *)(unaff_x20 + 0x14) = in_stack_00000050;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack0000000000000064;
  *(ulong *)(unaff_x20 + 0x20) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
  puVar2 = PTR_DAT_09f1eb60;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x70) = 0x3f800000;
    puVar1 = PTR_DAT_09f1e740;
    uVar10 = 0;
    lVar12 = 0x20;
    lVar13 = 0x2c;
    uVar3 = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    while (uVar16 = (undefined4)uVar3, *(long *)(unaff_x19 + 0x60) != 0) {
      lVar4 = FUN_05badb74(*(long *)(unaff_x19 + 0x60),uVar10 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_09f1eba8);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar5 = FUN_0952c404(lVar4,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) break;
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar5 & 1) == 0) {
        if (((lVar4 == 0) || (lVar6 = FUN_095258d0(lVar4,0), lVar6 == 0)) ||
           (uVar17 = FUN_0953a358(lVar6,0), lVar11 == 0)) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_07c9e97c;
        puVar9 = (undefined4 *)(lVar11 + lVar13);
        puVar9[-3] = uVar17;
        puVar9[-2] = uVar16;
        puVar9[-1] = (int)param_3;
        *puVar9 = param_4;
        uVar3 = FUN_095258d0(lVar4,0);
        FUN_07c09014(&stack0x00000070,uVar3,0,0);
        uStack00000000000000a4 = CONCAT44(in_stack_00000088,uStack0000000000000084);
        uStack0000000000000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        uStack000000000000009c = uStack000000000000007c;
        uStack00000000000000a0 = in_stack_00000080;
        uVar3 = FUN_095258d0();
        FUN_07c1d8a4(&stack0x00000070,uVar3,&stack0x00000090,0);
        uStack00000000000000a4 = CONCAT44(in_stack_00000088,uStack0000000000000084);
        uStack0000000000000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        uStack000000000000009c = uStack000000000000007c;
        uStack00000000000000a0 = in_stack_00000080;
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        if (lVar4 == 0) break;
        uVar3 = CONCAT44(in_stack_00000088,uStack0000000000000084);
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_07c9e97c;
        uVar14 = CONCAT44(in_stack_00000080,uStack000000000000007c);
        uVar15 = CONCAT44(uStack000000000000007c,in_stack_00000078);
      }
      else {
        if (DAT_0a51bf45 == '\0') {
          FUN_04447ba8(puVar2);
          DAT_0a51bf45 = '\x01';
        }
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) {
LAB_07c9e97c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar3 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        *(undefined8 *)(lVar11 + lVar13 + -4) = (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1];
        *(undefined8 *)(lVar11 + lVar13 + -0xc) = uVar3;
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8(puVar1);
          DAT_0a51bf43 = '\x01';
          cVar7 = DAT_0a51bf45;
        }
        else {
          cVar7 = '\x01';
        }
        puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        uVar16 = *puVar9;
        uVar17 = puVar9[1];
        param_3 = (ulong)(uint)puVar9[2];
        if (cVar7 == '\0') {
          FUN_04447ba8(puVar2);
          DAT_0a51bf45 = '\x01';
        }
        puVar9 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        param_4 = *puVar9;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        uStack000000000000007c = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        uStack0000000000000084 = 0;
        FUN_09537b20(uVar16,uVar17,param_3,param_4,puVar9[1],puVar9[2],puVar9[3],&stack0x00000070,0)
        ;
        if (lVar4 == 0) break;
        uVar3 = CONCAT44(in_stack_00000088,uStack0000000000000084);
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_07c9e97c;
        uVar14 = CONCAT44(in_stack_00000080,uStack000000000000007c);
        uVar15 = CONCAT44(uStack000000000000007c,in_stack_00000078);
      }
      puVar8 = (undefined8 *)(lVar4 + lVar12);
      lVar13 = lVar13 + 0x10;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x1c;
      *(undefined8 *)((long)puVar8 + 0x14) = uVar3;
      *(undefined8 *)((long)puVar8 + 0xc) = uVar14;
      puVar8[1] = uVar15;
      *puVar8 = in_stack_00000070;
      uVar3 = in_stack_00000070;
      if (lVar13 == 0x1cc) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


