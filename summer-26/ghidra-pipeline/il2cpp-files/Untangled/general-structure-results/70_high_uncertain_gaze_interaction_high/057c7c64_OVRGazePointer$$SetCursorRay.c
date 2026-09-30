/*
FUNCTION_NAME: OVRGazePointer$$SetCursorRay
ENTRY_POINT: 057c7c64
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057c7f0c) */

void OVRGazePointer__SetCursorRay(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x10;
  undefined4 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long lVar6;
  byte unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar7;
  double dVar8;
  double unaff_d9;
  float unaff_s10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000038;
  char cStack0000000000000048;
  char cStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined3 uStack0000000000000068;
  undefined1 uStack000000000000006b;
  undefined3 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  byte in_stack_00000090;
  long in_stack_00000098;
  double in_stack_000000a0;
  float in_stack_000000a8;
  long in_stack_000000b8;
  
  do {
    if (param_1 == in_x10) {
      FUN_0431908c((long)&stack0x00000048 + 4,~*(uint *)(unaff_x21 + 1) >> 0x1f,*unaff_x28);
LAB_057c7df0:
      if (cStack000000000000004c != '\0') goto LAB_057c7df8;
    }
    else {
      if ((unaff_w26 == 0) != (bool)(unaff_w25 & 1)) {
        FUN_0431908c((long)&stack0x00000048 + 4,1,*unaff_x28);
        goto LAB_057c7df0;
      }
      lVar6 = unaff_x21[2];
      lVar4 = unaff_x21[5];
      if (*(int *)(*(long *)PTR_DAT_06d38458 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar3 = FUN_0585ab54(lVar6,(int)lVar4,&stack0x00000044,&stack0x00000048,0);
      if ((uVar3 & 1) == 0) {
        FUN_0431908c((long)&stack0x00000048 + 4,0,*unaff_x28);
        goto LAB_057c7df0;
      }
      if (cStack0000000000000048 != '\0') goto LAB_057c7df0;
      dVar8 = unaff_d9;
      if (0.0 < unaff_d9) {
        fVar7 = (float)FUN_066cf260(0);
        dVar8 = unaff_d9 - (double)(fVar7 - unaff_s10);
        if (dVar8 <= 0.0) {
          FUN_0431908c((long)&stack0x00000048 + 4,0,*unaff_x28);
        }
      }
      if (cStack000000000000004c == '\0') {
        lVar6 = unaff_x21[2];
        lVar4 = unaff_x21[5];
        if (*(int *)(*(long *)PTR_DAT_06d38458 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar3 = FUN_0585aa34(dVar8,lVar6,(int)lVar4,unaff_w25 & 1,&stack0x00000038,0);
        if ((uVar3 & 1) == 0) {
          FUN_0431908c((long)&stack0x00000048 + 4,0,*unaff_x28);
        }
        else {
          if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar5 = *(undefined8 *)PTR_DAT_06d5c1e0;
          in_stack_00000088 = in_stack_00000078;
          in_stack_00000080 = in_stack_00000070;
          *(uint *)((long)unaff_x20 + 3) = CONCAT31(uStack000000000000006c,uStack000000000000006b);
          *unaff_x20 = _uStack0000000000000068;
          in_stack_00000098 = in_stack_00000038;
          in_stack_00000090 = unaff_w25;
          in_stack_000000a0 = unaff_d9;
          in_stack_000000a8 = unaff_s10;
          FUN_040e1614(in_stack_000000b8,unaff_w22,&stack0x00000080,uVar5);
        }
        goto LAB_057c7df0;
      }
LAB_057c7df8:
      if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_040e3438(in_stack_000000b8,unaff_w22,*(undefined8 *)PTR_DAT_06d5c1c8);
      uVar2 = FUN_043190a8((long)&stack0x00000048 + 4,*(undefined8 *)PTR_DAT_06d172f0);
      if (*(int *)(*(long *)PTR_DAT_06d36d18 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0435f584(&stack0x00000050,uVar2 & 1,*unaff_x29);
      unaff_w22 = unaff_w22 + -1;
    }
    unaff_w22 = unaff_w22 + 1;
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(in_stack_000000b8 + 0x18) <= unaff_w22) {
      if (*(int *)(in_stack_000000b8 + 0x18) == 0) {
        FUN_03b2ffe0(in_stack_000000b8,*(undefined8 *)PTR_DAT_06d5c1e8);
        puVar1 = PTR_DAT_06d36bd0;
        lVar4 = *(long *)PTR_DAT_06d36bd0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_04d2c73c(lVar4,in_stack_00000008,in_stack_00000010,*(undefined8 *)PTR_DAT_06d5c1c0);
      }
      return;
    }
    FUN_040e15ac(&stack0x00000080,in_stack_000000b8,unaff_w22,*unaff_x27);
    _cStack000000000000004c = 0;
    in_stack_00000078 = in_stack_00000088;
    in_stack_00000070 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    uStack0000000000000068 = (undefined3)*unaff_x20;
    uStack000000000000006b = (undefined1)*(undefined4 *)((long)unaff_x20 + 3);
    uStack000000000000006c = (undefined3)((uint)*(undefined4 *)((long)unaff_x20 + 3) >> 8);
    param_1 = *unaff_x21;
    in_x10 = in_stack_00000098;
    unaff_d9 = in_stack_000000a0;
    unaff_s10 = in_stack_000000a8;
    unaff_w25 = in_stack_00000090;
  } while( true );
}


