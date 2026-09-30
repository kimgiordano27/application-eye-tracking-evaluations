/*
FUNCTION_NAME: Unity.Services.Core.RequestFailedException$$.ctor
ENTRY_POINT: 058cc660
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void Unity_Services_Core_RequestFailedException___ctor
               (undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  long in_stack_00000040;
  int iStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long lStack00000000000000b0;
  long lStack00000000000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = param_3;
  do {
    lStack00000000000000b0 = 0;
    lStack00000000000000b8 = 0;
    FUN_03a1fb44(param_2,auVar10._0_8_,auVar10._8_8_,param_5,*param_1);
    *(undefined1 *)(unaff_x19 + 10) = unaff_w28;
    unaff_x19[9] = lStack00000000000000b8;
    unaff_x19[8] = lStack00000000000000b0;
    do {
      uVar4 = FUN_03ac49b8(unaff_x19 + 4,*unaff_x24);
      if ((uVar4 & 1) != 0) {
LAB_058cc688:
        puVar2 = PTR_DAT_06321548;
        if (unaff_x20 == 0) goto LAB_058cc7f0;
        FUN_03aaed70(unaff_x20 + 0x20,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>__ctor__
                    );
        puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Item__;
        if (((char)unaff_x19[10] == '\0') || ((int)unaff_x19[6] < 1)) goto LAB_058cc788;
        lVar9 = 0;
        goto LAB_058cc6cc;
      }
      FUN_03ac4a50(&stack0x000000b0,unaff_x19 + 4,*unaff_x25);
      in_stack_00000078 = lStack00000000000000b8;
      in_stack_00000070 = lStack00000000000000b0;
      in_stack_00000088 = in_stack_000000c8;
      in_stack_00000080 = in_stack_000000c0;
      in_stack_00000090 = in_stack_000000d0;
      uVar4 = FUN_05cab124(unaff_x23 + 0x18,0);
      if ((uVar4 & 1) == 0) goto LAB_058cc688;
      FUN_03ac4b40(&stack0x000000b0,unaff_x19 + 4,*unaff_x26);
      iStack0000000000000048 = (int)lStack00000000000000b8;
      uStack000000000000004c = (undefined4)((ulong)lStack00000000000000b8 >> 0x20);
      in_stack_00000040 = lStack00000000000000b0;
      in_stack_00000058 = in_stack_000000c8;
      in_stack_00000050 = in_stack_000000c0;
      in_stack_00000060 = in_stack_000000d0;
      uVar4 = FUN_05cab19c(unaff_x29 + 0x18,0);
    } while (((uVar4 & 1) != 0) ||
            (auVar10 = FUN_0311a838(unaff_x29 + 0x18,0,*unaff_x27),
            auVar10._8_4_ != iStack0000000000000048 * 4));
    if ((char)unaff_x19[10] != '\0') {
      FUN_040b8d7c(unaff_x19 + 5,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Finger>__ctor__);
      FUN_03a1fcfc(unaff_x19 + 8,*(undefined8 *)PTR_DAT_06321558);
      *(undefined1 *)(unaff_x19 + 10) = 0;
    }
    auVar1._8_4_ = iStack0000000000000048;
    auVar1._0_8_ = in_stack_00000040;
    auVar1._12_4_ = uStack000000000000004c;
    param_2 = (undefined1 *)&stack0x000000b0;
    param_5 = 4;
    unaff_x19[6] = auVar1._8_8_;
    unaff_x19[5] = in_stack_00000040;
    unaff_x19[7] = in_stack_00000050;
    param_1 = (undefined8 *)Method_System_Collections_Generic_Queue<GameObject>_Enqueue__;
  } while( true );
LAB_058cc6cc:
  piVar7 = (int *)unaff_x19[5];
  piVar5 = piVar7 + lVar9 * 5;
  in_stack_00000010 = *(undefined8 *)piVar5;
  iStack0000000000000020 = piVar5[4];
  if (piVar5[1] == 1 || iStack0000000000000020 != 0) {
    if (lVar9 != 0) {
      lVar8 = lVar9;
      do {
        if ((piVar7[4] != 0 || piVar7[1] == 1) && *piVar7 == *piVar5) {
          iVar6 = piVar5[2] - piVar7[2];
          goto LAB_058cc734;
        }
        lVar8 = lVar8 + -1;
        piVar7 = piVar7 + 5;
      } while (lVar8 != 0);
    }
    iVar6 = 0;
  }
  else {
    iVar6 = -1;
  }
LAB_058cc734:
  auVar10 = NEON_rev64(*(undefined1 (*) [16])
                        (unaff_x19[8] +
                        (-(ulong)(((uint)lVar9 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                        (ulong)((uint)lVar9 << 2) << 2)),4);
  in_stack_00000018 = CONCAT44(piVar5[3],iVar6);
  uStack000000000000002c = auVar10._8_4_;
  in_stack_00000030 = auVar10._12_4_;
  uStack0000000000000024 = auVar10._0_4_;
  uStack0000000000000028 = auVar10._4_4_;
  FUN_03aaea04(unaff_x20 + 0x20,&stack0x00000010,*(undefined8 *)puVar3);
  lVar9 = lVar9 + 1;
  if ((int)unaff_x19[6] <= lVar9) {
LAB_058cc788:
    FUN_03a1fa14(&stack0x000000a0,0x100,2,1,*(undefined8 *)puVar2);
    if (*unaff_x19 != 0) {
      FUN_031d9b94(*unaff_x19,in_stack_000000a0,in_stack_000000a8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__)
      ;
      FUN_03a1fcfc(&stack0x000000a0,*(undefined8 *)PTR_DAT_06321558);
      return;
    }
LAB_058cc7f0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_058cc6cc;
}


