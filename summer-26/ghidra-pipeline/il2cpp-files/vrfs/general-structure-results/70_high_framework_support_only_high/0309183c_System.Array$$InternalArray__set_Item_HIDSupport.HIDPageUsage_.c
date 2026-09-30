/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HIDSupport.HIDPageUsage>
ENTRY_POINT: 0309183c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__set_Item<HIDSupport_HIDPageUsage>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char cStack000000000000009c;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e4cc90);
  thunk_FUN_0159f088(PTR_DAT_06da3e88);
  thunk_FUN_0159f088(PTR_DAT_06e35b68);
                    /* try { // try from 03091864 to 0319192b has its CatchHandler @ 03091864
                       catch() { ... } // from try @ 03091864 with catch @ 03091864
                       catch() { ... } // from try @ 03091934 with catch @ 03091864
                       catch() { ... } // from try @ 03091990 with catch @ 03091864
                       catch() { ... } // from try @ 030919c0 with catch @ 03091864 */
  thunk_FUN_0159f088(PTR_DAT_06e36c00);
  thunk_FUN_0159f088(PTR_DAT_06dafe40);
  thunk_FUN_0159f088(PTR_DAT_06e02590);
  thunk_FUN_0159f088(PTR_DAT_06e57508);
  *(undefined1 *)(unaff_x20 + 0x3fb) = 1;
  cStack000000000000009c = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000020 = 0;
  lVar12 = FUN_03091110();
  if (lVar12 != 0) {
    if ((char)unaff_x19[7] != '\0') {
      FUN_02bcd844();
      *(undefined1 *)(unaff_x19 + 7) = 0;
    }
    cStack000000000000009c = '\x01';
    uVar17 = FUN_0365a36c(unaff_x19[8],&stack0x0000009c,0);
    in_stack_00000060 = CONCAT44(param_2,uVar17);
    in_stack_00000068 = CONCAT44(param_4,param_3);
    lVar12 = FUN_03091110();
    if ((lVar12 == 0) || (lVar12 = FUN_036e1350(lVar12,0), lVar12 == 0)) goto LAB_03091dd4;
    uVar11 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
    if (uVar11 < 2) {
      FUN_030916d8();
                    /* try { // try from 0309192c to 03191933 has its CatchHandler @ 03091974 */
                    /* try { // try from 03091934 to 0319198b has its CatchHandler @ 03091864 */
      uVar13 = FUN_051dc32c(&stack0x00000060,1,0);
      if ((uVar13 & 1) == 0) {
        uVar17 = FUN_051dc09c(0);
        in_stack_00000060 = CONCAT44(param_2,uVar17);
        in_stack_00000068 = CONCAT44(param_4,param_3);
        cStack000000000000009c = '\0';
      }
    }
    puVar7 = PTR_DAT_06e57508;
    puVar6 = PTR_DAT_06e4cc90;
    puVar5 = PTR_DAT_06e02590;
    puVar4 = PTR_DAT_06dfe010;
    puVar3 = PTR_DAT_06db92d8;
    puVar2 = PTR_DAT_06dafe40;
    puVar1 = PTR_DAT_06da3e88;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0309192c with catch @ 03091974
                        */
    uVar13 = FUN_051dc3c0(in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                          in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,(int)unaff_x19[9],
                          *(undefined4 *)((long)unaff_x19 + 0x4c),(int)unaff_x19[10],
                          *(undefined4 *)((long)unaff_x19 + 0x54),0);
    if ((uVar13 & 1) == 0) {
      if ((char)unaff_x19[0xb] == '\0') {
        if (unaff_x19[5] == 0) goto LAB_03091dd4;
        FUN_02112e64(&stack0x00000008,unaff_x19[5],*(undefined8 *)puVar5);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar13 = FUN_03e1b434(&stack0x00000020,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*in_stack_00000030 + 0x4e8))
                    (in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                     in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,in_stack_00000030,
                     cStack000000000000009c,*(undefined8 *)(*in_stack_00000030 + 0x4f0));
        }
      }
      else {
        if (unaff_x19[6] == 0) goto LAB_03091dd4;
        FUN_02112e64(&stack0x00000008,unaff_x19[6],*(undefined8 *)puVar2);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000018;
        while (uVar13 = FUN_03e1b434(&stack0x00000040,*(undefined8 *)puVar1),
              cVar10 = cStack000000000000009c, plVar8 = in_stack_00000050, (uVar13 & 1) != 0) {
          if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar15 = *in_stack_00000050;
          uVar18 = in_stack_00000068 & 0xffffffff;
          uVar9 = in_stack_00000068._4_4_;
          uVar19 = in_stack_00000060 & 0xffffffff;
          uVar17 = in_stack_00000060._4_4_;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
          lVar12 = *(long *)puVar7;
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_03091bd8;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_015c2a80(in_stack_00000050,lVar12,4);
LAB_03091bd8:
          (*(code *)*puVar14)(uVar19,uVar17,uVar18,uVar9,plVar8,cVar10 != '\0',puVar14[1]);
        }
        FUN_03e1b430(&stack0x00000040,*(undefined8 *)puVar4);
        if (unaff_x19[5] == 0) goto LAB_03091dd4;
        FUN_02112e64(&stack0x00000008,unaff_x19[5],*(undefined8 *)puVar5);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar13 = FUN_03e1b434(&stack0x00000020,*(undefined8 *)puVar6),
              plVar8 = in_stack_00000030, (uVar13 & 1) != 0) {
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*in_stack_00000030 + 0x4f8))
                    (in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                     in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,in_stack_00000030,
                     cStack000000000000009c,*(undefined8 *)(*in_stack_00000030 + 0x500));
          lVar12 = FUN_03663ff0(plVar8,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar13 = FUN_036e0058(lVar12,0);
          if ((uVar13 & 1) != 0) {
            (**(code **)(*plVar8 + 0x4e8))
                      (in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                       in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,plVar8,
                       cStack000000000000009c,*(undefined8 *)(*plVar8 + 0x4f0));
          }
        }
      }
    }
    else {
      if (unaff_x19[6] == 0) {
LAB_03091dd4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02112e64(&stack0x00000008,unaff_x19[6],*(undefined8 *)puVar2);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      while (uVar13 = FUN_03e1b434(&stack0x00000040,*(undefined8 *)puVar1),
            cVar10 = cStack000000000000009c, plVar8 = in_stack_00000050, (uVar13 & 1) != 0) {
        if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar15 = *in_stack_00000050;
        uVar18 = in_stack_00000068 & 0xffffffff;
        uVar9 = in_stack_00000068._4_4_;
        uVar19 = in_stack_00000060 & 0xffffffff;
        uVar17 = in_stack_00000060._4_4_;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lVar12 = *(long *)puVar7;
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar14 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto LAB_03091a40;
            }
            uVar13 = uVar13 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_015c2a80(in_stack_00000050,lVar12,4);
LAB_03091a40:
        (*(code *)*puVar14)(uVar19,uVar17,uVar18,uVar9,plVar8,cVar10 != '\0',puVar14[1]);
      }
      FUN_03e1b430(&stack0x00000040,*(undefined8 *)puVar4);
      if (unaff_x19[5] == 0) goto LAB_03091dd4;
      FUN_02112e64(&stack0x00000008,unaff_x19[5],*(undefined8 *)puVar5);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar13 = FUN_03e1b434(&stack0x00000020,*(undefined8 *)puVar6),
            plVar8 = in_stack_00000030, (uVar13 & 1) != 0) {
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*in_stack_00000030 + 0x4f8))
                  (in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                   in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,in_stack_00000030,
                   cStack000000000000009c,*(undefined8 *)(*in_stack_00000030 + 0x500));
        lVar12 = *plVar8;
        (**(code **)(lVar12 + 0x4e8))
                  (in_stack_00000060 & 0xffffffff,in_stack_00000060._4_4_,
                   in_stack_00000068 & 0xffffffff,in_stack_00000068._4_4_,plVar8,
                   cStack000000000000009c,*(undefined8 *)(lVar12 + 0x4f0));
      }
    }
    FUN_03e1b430(&stack0x00000020,*(undefined8 *)puVar3);
    *(undefined1 *)(unaff_x19 + 0xb) = 0;
    unaff_x19[10] = in_stack_00000068;
    unaff_x19[9] = in_stack_00000060;
    (**(code **)(*unaff_x19 + 0x288))();
  }
  return;
}


