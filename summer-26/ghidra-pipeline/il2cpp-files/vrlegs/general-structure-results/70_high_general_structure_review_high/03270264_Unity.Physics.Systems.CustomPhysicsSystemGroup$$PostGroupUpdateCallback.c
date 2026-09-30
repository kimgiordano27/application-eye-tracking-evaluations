/*
FUNCTION_NAME: Unity.Physics.Systems.CustomPhysicsSystemGroup$$PostGroupUpdateCallback
ENTRY_POINT: 03270264
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_Systems_CustomPhysicsSystemGroup__PostGroupUpdateCallback(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  int unaff_w19;
  long lVar12;
  undefined8 *puVar13;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int *piVar14;
  undefined8 *unaff_x29;
  undefined1 auVar15 [16];
  int iStack0000000000000010;
  uint uStack0000000000000014;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 *in_stack_00000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  do {
    iStack000000000000005c = iStack000000000000005c + -1;
    if (iStack000000000000005c < 0) {
      iStack000000000000005c = *(int *)(in_stack_00000018 + 0x48) + -1;
      unaff_x27 = (undefined8 *)FUN_0326fb18();
    }
    else {
      unaff_x27 = (undefined8 *)((long)unaff_x27 - in_stack_00000020);
    }
    do {
      piVar14 = (int *)((long)unaff_x27 + 0xc);
      iVar5 = *(int *)(unaff_x27 + 6);
      if (*piVar14 == unaff_w19) {
        uVar6 = FUN_0324c004(*(undefined1 *)((long)unaff_x27 + 0x2c),0);
        if ((uVar6 & 1) != 0) goto LAB_032702bc;
        if ((iVar5 == in_stack_00000068._4_4_) && (*(char *)((long)unaff_x27 + 0x2c) == '\x01')) {
          *(undefined1 *)(unaff_x29 + 4) = 1;
          uVar10 = unaff_x27[2];
          *(undefined8 *)((long)unaff_x29 + 0xc) = 0;
          *(undefined8 *)((long)unaff_x29 + 4) = uVar10;
          *(undefined1 *)(in_stack_00000028 + 0x31) = 1;
        }
LAB_032705fc:
        unaff_w24 = unaff_w24 + 1;
        if (iStack0000000000000058 == unaff_w24) goto LAB_0327060c;
      }
      else {
LAB_032702bc:
        uVar6 = FUN_0324c004(*(undefined1 *)((long)unaff_x27 + 0x2c),0);
        if ((uVar6 & 1) == 0) {
LAB_03270338:
          if (*unaff_x23 == 0) {
LAB_0327064c:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          puVar7 = (undefined8 *)FUN_03270f5c(*unaff_x23,(long)&stack0x000000c0 + 4);
          lVar8 = *unaff_x23;
          if (lVar8 == 0) goto LAB_0327064c;
          if (*(int *)(lVar8 + 0x28) == 1) {
            iVar11 = 0xc;
            if (*(char *)(lVar8 + 0x60) != '\0') {
              iVar11 = 0x10;
            }
          }
          else {
            iVar11 = 0x10;
          }
          lVar12 = *unaff_x26;
          uVar1 = *(int *)(lVar8 + 0x4c) + *(int *)(lVar8 + 0x40) + iVar11;
          plVar9 = *(long **)(lVar12 + 0x38);
          uVar2 = uVar1 + 3;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          if (uVar1 != (uVar2 & 0xfffffffc)) {
            uVar1 = (uVar2 & 0xfffffffc) + 4;
          }
          if (plVar9 == (long *)0x0) {
            FUN_01a47054(lVar12);
            plVar9 = *(long **)(lVar12 + 0x38);
          }
          if (puVar7 == (undefined8 *)0x0) goto LAB_0327064c;
          iVar11 = *(int *)(*plVar9 + 0xfc);
          *puVar7 = *unaff_x27;
          lVar8 = *unaff_x23;
          if (((lVar8 == 0) || (*in_stack_00000060 == 0)) ||
             (*(long *)(*in_stack_00000060 + 0x20) == 0)) goto LAB_0327064c;
          auVar15 = FUN_0327106c();
          _in_stack_00000088 = auVar15;
          FUN_02068f90(&stack0x00000088,0,&stack0x000000c8,*(undefined8 *)PTR_DAT_03cd82b0);
          uVar4 = FUN_01f28110(lVar8 + 0x20,lVar8 + 0x28,in_stack_000000c8,10,
                               *(undefined8 *)UniHumanoid_BvhSkeletonEstimator_TypeInfo);
          *(undefined4 *)((long)puVar7 + 0xc) = uVar4;
          lVar8 = *(long *)Cysharp_Threading_Tasks_UniTaskSynchronizationContext_Callback___TypeInfo
          ;
          plVar9 = *(long **)(lVar8 + 0x38);
          if (plVar9 == (long *)0x0) {
            FUN_01a47054(lVar8);
            plVar9 = *(long **)(lVar8 + 0x38);
          }
          unaff_x29 = puVar7 + 2;
          puVar13 = (undefined8 *)((long)puVar7 + ((long)(int)uVar1 - (long)iVar11));
          FUN_0366a438(unaff_x29,piVar14,(long)*(int *)(*plVar9 + 0xfc),0);
          lVar8 = *unaff_x26;
          plVar9 = *(long **)(lVar8 + 0x38);
          if (plVar9 == (long *)0x0) {
            FUN_01a47054(lVar8);
            plVar9 = *(long **)(lVar8 + 0x38);
          }
          FUN_0366a438(puVar13,(long)unaff_x27 + in_stack_00000040,(long)*(int *)(*plVar9 + 0xfc),0)
          ;
          if (((iVar5 == in_stack_00000068._4_4_) ||
              (1 < (byte)(*(char *)((long)unaff_x27 + 0x2c) - 1U))) ||
             ((*(char *)((long)unaff_x27 + 0x2c) == '\x02' &&
              ((*(char *)((long)unaff_x27 + 0x2f) < '\0' &&
               (*(int *)(unaff_x27 + 6) == iStack0000000000000010)))))) {
            if ((iVar5 == in_stack_00000068._4_4_) || (*(char *)((long)unaff_x27 + 0x2f) < '\0')) {
              if (puVar13 == (undefined8 *)0x0) goto LAB_0327064c;
              uVar10 = *puVar13;
            }
            else {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 0;
            *(undefined1 *)(puVar7 + 6) = 5;
          }
          *(undefined8 *)((long)puVar7 + 0x1c) = uVar10;
          FUN_0206f694(&stack0x000000b0,*unaff_x23,in_stack_000000c0._4_4_,puVar7,
                       *(undefined8 *)byte_TypeInfo);
          uVar3 = in_stack_000000b8;
          uVar10 = in_stack_000000b0;
          lVar8 = *in_stack_00000060;
          if (*(int *)(*(long *)PTR_DAT_03cee208 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_00000098 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000098,lVar8);
          in_stack_000000a0 = uVar10;
          in_stack_000000a8 = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000030,0);
          in_stack_00000078 = in_stack_000000a0;
          in_stack_00000070 = in_stack_00000098;
          in_stack_00000080 = in_stack_000000a8;
          FUN_01f29c60(in_stack_00000038,in_stack_00000050,in_stack_00000048._4_4_,&stack0x00000070,
                       10,*(undefined8 *)
                           System_Linq_Expressions_Interpreter_ByRefNewInstruction_TypeInfo);
          unaff_w19 = *piVar14;
          iVar5 = Unity_Physics_Systems_ColliderBlobCleanupSystem___codegen__OnCreate_00000A99_BurstDirectCall__Initialize
                            (&stack0x00000098);
          if (iVar5 != 5) {
            *(undefined1 *)(in_stack_00000028 + 0x31) = 1;
          }
          goto LAB_032705fc;
        }
        if (*(char *)((long)unaff_x27 + 0x2f) < '\0') {
          if ((iVar5 == in_stack_00000068._4_4_) ||
             (*(int *)(unaff_x27 + 6) == iStack0000000000000010)) goto LAB_03270338;
        }
        else if (iVar5 == in_stack_00000068._4_4_) goto LAB_03270338;
LAB_0327060c:
        do {
          do {
            uStack0000000000000014 = uStack0000000000000014 + 1;
            if (*(int *)(in_stack_00000028 + 0x28) <= (int)uStack0000000000000014) {
              *(undefined1 *)(in_stack_00000028 + 0x30) = 1;
              return;
            }
            lVar8 = *(long *)(in_stack_00000028 + 8);
            if (lVar8 == 0) goto LAB_0327064c;
            if (*(uint *)(lVar8 + 0x18) <= uStack0000000000000014) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            in_stack_00000060 = (long *)(lVar8 + (long)(int)uStack0000000000000014 * 8 + 0x20);
            if ((*in_stack_00000060 == 0) ||
               (in_stack_00000018 = *(long *)(*in_stack_00000060 + 0x20), in_stack_00000018 == 0))
            goto LAB_0327064c;
            iStack0000000000000058 = *(int *)(in_stack_00000018 + 0x44);
          } while (iStack0000000000000058 == 0);
          in_stack_00000048._4_4_ = *in_stack_00000050;
          iVar5 = *(int *)(in_stack_00000018 + 0x48);
          iStack000000000000005c = iStack0000000000000058 + *(int *)(in_stack_00000018 + 0x50) + -1;
          iVar11 = 0;
          if (iVar5 != 0) {
            iVar11 = iStack000000000000005c / iVar5;
          }
          iStack000000000000005c = iStack000000000000005c - iVar11 * iVar5;
          unaff_x27 = (undefined8 *)FUN_0326fb18(in_stack_00000018);
          if (*(int *)(in_stack_00000018 + 0x28) == 1) {
            iVar5 = 0xc;
            if (*(char *)(in_stack_00000018 + 0x60) != '\0') {
              iVar5 = 0x10;
            }
          }
          else {
            iVar5 = 0x10;
          }
          uVar1 = *(int *)(in_stack_00000018 + 0x4c) + *(int *)(in_stack_00000018 + 0x40) + iVar5;
          uVar2 = uVar1 + 3;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          if (uVar1 != (uVar2 & 0xfffffffc)) {
            uVar1 = (uVar2 & 0xfffffffc) + 4;
          }
        } while (iStack0000000000000058 < 1);
        unaff_w19 = 0;
        unaff_w24 = 0;
        unaff_x29 = (undefined8 *)0x0;
        in_stack_00000020 = (long)(int)uVar1;
        in_stack_00000040 = (long)(int)(uVar1 - *(int *)(in_stack_00000018 + 0x4c));
      }
    } while (unaff_w24 == 0);
  } while( true );
}


