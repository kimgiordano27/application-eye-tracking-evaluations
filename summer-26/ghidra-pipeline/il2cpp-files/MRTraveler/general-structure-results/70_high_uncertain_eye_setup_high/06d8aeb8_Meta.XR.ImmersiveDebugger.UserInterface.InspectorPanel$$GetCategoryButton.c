/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$GetCategoryButton
ENTRY_POINT: 06d8aeb8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__GetCategoryButton
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  long lStack00000000000000b8;
  
  lVar2 = tpidr_el0;
  lStack00000000000000b8 = *(long *)(lVar2 + 0x28);
  if ((DAT_09419a4e & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(PTR_DAT_08e8dbd8);
    FUN_03c8f898(PTR_DAT_08e8f720);
    FUN_03c8f898(PTR_DAT_08e8f728);
    FUN_03c8f898(PTR_DAT_08e8f730);
    FUN_03c8f898(PTR_DAT_08e8f738);
    FUN_03c8f898(PTR_DAT_08e8f740);
    FUN_03c8f898(PTR_DAT_08e8f748);
    FUN_03c8f898(PTR_DAT_08e8f750);
    FUN_03c8f898(PTR_DAT_08e68f00);
    FUN_03c8f898(PTR_DAT_08e8ee30);
    FUN_03c8f898(PTR_DAT_08e8ee38);
    FUN_03c8f898(PTR_DAT_08e8ee40);
    FUN_03c8f898(PTR_DAT_08e8ee48);
    FUN_03c8f898(PTR_DAT_08e8ee58);
    DAT_09419a4e = 1;
  }
  in_stack_000000b0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (*(long *)(param_4 + 0x38) == 0) {
    puVar14 = (undefined8 *)PTR_DAT_08e8ee48;
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      puVar14 = (undefined8 *)PTR_DAT_08e8ee48;
    }
  }
  else {
    uVar7 = FUN_06d89b80((ulong *)(param_4 + 0x48));
    if ((uVar7 & 1) == 0) {
      puVar14 = (undefined8 *)PTR_DAT_08e8ee30;
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        puVar14 = (undefined8 *)PTR_DAT_08e8ee30;
      }
    }
    else {
      uVar7 = FUN_06d89b80((ulong *)(param_4 + 0x80));
      if ((uVar7 & 1) != 0) {
        lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8f750);
        System_Collections_Generic_List<Spectrum_Point>__Insert
                  (lVar8,*(undefined8 *)PTR_DAT_08e8f730);
        puVar3 = PTR_DAT_08e8f720;
        lVar13 = *(long *)(param_4 + 0x38);
        if (lVar13 != 0) {
          uVar7 = 0;
          uVar17 = (ulong)&stack0x00000040 | 8;
          lVar18 = 0x100000000;
          do {
            if ((long)(*(int *)(lVar13 + 0x18) + -1) <= (long)uVar7) {
              uVar7 = FUN_06d8a454(param_4,5);
              uVar9 = FUN_06d8a454(param_4,4);
              uVar10 = FUN_06d8a454(param_4,2);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
              }
              uVar11 = FUN_085dfaac(uVar7,0,0);
              if ((uVar11 & 1) != 0) {
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,0x36);
                uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000080);
                uVar12 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8ee38,uVar12,
                                      *(undefined8 *)(param_4 + 8),0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar12,0);
                uVar7 = uVar9;
              }
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar9 = FUN_085dfaac(uVar9,0,0);
              if ((uVar9 & 1) != 0) {
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,8);
                uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000080);
                uVar12 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8ee38,uVar12,
                                      *(undefined8 *)(param_4 + 8),0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar12,0);
                uVar7 = uVar10;
              }
              uVar10 = *(ulong *)(param_4 + 0x48);
              uVar9 = *(ulong *)(param_4 + 0x80);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar11 = FUN_085decd4(uVar10,0,0);
              if ((uVar11 & 1) == 0) {
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,0xb);
                uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000080);
                uVar12 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8ee38,uVar12,
                                      *(undefined8 *)(param_4 + 8),0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar12,0);
              }
              else {
                in_stack_00000050 = 0;
                in_stack_00000058 = 0;
                in_stack_00000048 = 0;
                in_stack_00000040 = uVar7;
                thunk_FUN_03d233cc(&stack0x00000040,uVar7);
                in_stack_00000048 = uVar10;
                thunk_FUN_03d233cc(uVar17,uVar10);
                if (lVar8 == 0) break;
                lVar18 = *(long *)puVar3;
                in_stack_00000068 = in_stack_00000048;
                in_stack_00000060 = in_stack_00000040;
                in_stack_00000078 = in_stack_00000058;
                in_stack_00000070 = in_stack_00000050;
                lVar13 = *(long *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar13 == 0) break;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                  *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                  *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                  *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                  *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                  thunk_FUN_03d233cc(lVar13 + 0x20,0);
                }
                else {
                  in_stack_00000088 = in_stack_00000048;
                  in_stack_00000080 = in_stack_00000040;
                  fStack0000000000000098 = (float)in_stack_00000058;
                  uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                  fStack0000000000000090 = (float)in_stack_00000050;
                  fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                  FUN_0533ee94(lVar8,&stack0x00000080,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar11 = FUN_085decd4(uVar9,0,0);
              if ((uVar11 & 1) == 0) {
                in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,0xc);
                uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000080);
                uVar12 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8ee38,uVar12,
                                      *(undefined8 *)(param_4 + 8),0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar12,0);
              }
              else {
                in_stack_00000050 = 0;
                in_stack_00000058 = 0;
                in_stack_00000048 = 0;
                in_stack_00000040 = uVar7;
                thunk_FUN_03d233cc(&stack0x00000040,uVar7);
                in_stack_00000048 = uVar9;
                thunk_FUN_03d233cc(uVar17,uVar9);
                if (lVar8 == 0) break;
                lVar18 = *(long *)puVar3;
                in_stack_00000068 = in_stack_00000048;
                in_stack_00000060 = in_stack_00000040;
                in_stack_00000078 = in_stack_00000058;
                in_stack_00000070 = in_stack_00000050;
                lVar13 = *(long *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar13 == 0) break;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                  *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                  *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                  *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                  *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                  thunk_FUN_03d233cc(lVar13 + 0x20,0);
                }
                else {
                  in_stack_00000088 = in_stack_00000048;
                  in_stack_00000080 = in_stack_00000040;
                  fStack0000000000000098 = (float)in_stack_00000058;
                  uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                  fStack0000000000000090 = (float)in_stack_00000050;
                  fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                  FUN_0533ee94(lVar8,&stack0x00000080,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              in_stack_00000048 = 0;
              in_stack_00000040 = 0;
              in_stack_00000058 = 0;
              in_stack_00000050 = 0;
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar11 = FUN_085decd4(uVar10,0,0);
              in_stack_00000040 = uVar10;
              if ((uVar11 & 1) == 0) {
                in_stack_00000040 = uVar7;
              }
              thunk_FUN_03d233cc(&stack0x00000040);
              in_stack_00000048 = *(ulong *)(param_4 + 0x50);
              thunk_FUN_03d233cc(uVar17);
              if (lVar8 != 0) {
                lVar18 = *(long *)puVar3;
                in_stack_00000068 = in_stack_00000048;
                in_stack_00000060 = in_stack_00000040;
                in_stack_00000078 = in_stack_00000058;
                in_stack_00000070 = in_stack_00000050;
                lVar13 = *(long *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                    *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                    *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                    *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                    *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                    thunk_FUN_03d233cc(lVar13 + 0x20,0);
                  }
                  else {
                    in_stack_00000088 = in_stack_00000048;
                    in_stack_00000080 = in_stack_00000040;
                    fStack0000000000000098 = (float)in_stack_00000058;
                    uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                    fStack0000000000000090 = (float)in_stack_00000050;
                    fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                    FUN_0533ee94(lVar8,&stack0x00000080,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  in_stack_00000048 = 0;
                  in_stack_00000040 = 0;
                  in_stack_00000058 = 0;
                  in_stack_00000050 = 0;
                  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  uVar10 = FUN_085decd4(uVar9,0,0);
                  in_stack_00000040 = uVar9;
                  if ((uVar10 & 1) == 0) {
                    in_stack_00000040 = uVar7;
                  }
                  thunk_FUN_03d233cc(&stack0x00000040);
                  in_stack_00000048 = *(ulong *)(param_4 + 0x88);
                  thunk_FUN_03d233cc(uVar17);
                  lVar18 = *(long *)puVar3;
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000078 = in_stack_00000058;
                  in_stack_00000070 = in_stack_00000050;
                  lVar13 = *(long *)(lVar8 + 0x10);
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                      *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                      *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                      *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                      *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                      thunk_FUN_03d233cc(lVar13 + 0x20,0);
                    }
                    else {
                      in_stack_00000088 = in_stack_00000048;
                      in_stack_00000080 = in_stack_00000040;
                      fStack0000000000000098 = (float)in_stack_00000058;
                      uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                      fStack0000000000000090 = (float)in_stack_00000050;
                      fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                      FUN_0533ee94(lVar8,&stack0x00000080,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    in_stack_00000050 = 0;
                    in_stack_00000058 = 0;
                    in_stack_00000040 = *(ulong *)(param_4 + 0x50);
                    in_stack_00000048 = 0;
                    thunk_FUN_03d233cc(&stack0x00000040);
                    in_stack_00000048 = *(ulong *)(param_4 + 0x58);
                    thunk_FUN_03d233cc(uVar17);
                    lVar18 = *(long *)puVar3;
                    in_stack_00000068 = in_stack_00000048;
                    in_stack_00000060 = in_stack_00000040;
                    in_stack_00000078 = in_stack_00000058;
                    in_stack_00000070 = in_stack_00000050;
                    lVar13 = *(long *)(lVar8 + 0x10);
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                        *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                        *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                        *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                        *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                        thunk_FUN_03d233cc(lVar13 + 0x20,0);
                      }
                      else {
                        in_stack_00000088 = in_stack_00000048;
                        in_stack_00000080 = in_stack_00000040;
                        fStack0000000000000098 = (float)in_stack_00000058;
                        uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                        fStack0000000000000090 = (float)in_stack_00000050;
                        fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                        FUN_0533ee94(lVar8,&stack0x00000080,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      }
                      in_stack_00000050 = 0;
                      in_stack_00000058 = 0;
                      in_stack_00000040 = *(ulong *)(param_4 + 0x88);
                      in_stack_00000048 = 0;
                      thunk_FUN_03d233cc(&stack0x00000040);
                      in_stack_00000048 = *(ulong *)(param_4 + 0x90);
                      thunk_FUN_03d233cc(uVar17);
                      lVar18 = *(long *)puVar3;
                      in_stack_00000068 = in_stack_00000048;
                      in_stack_00000060 = in_stack_00000040;
                      in_stack_00000078 = in_stack_00000058;
                      in_stack_00000070 = in_stack_00000050;
                      lVar13 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                          *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                          *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                          *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                          *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                          thunk_FUN_03d233cc(lVar13 + 0x20,0);
                        }
                        else {
                          in_stack_00000088 = in_stack_00000048;
                          in_stack_00000080 = in_stack_00000040;
                          fStack0000000000000098 = (float)in_stack_00000058;
                          uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                          fStack0000000000000090 = (float)in_stack_00000050;
                          fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                          FUN_0533ee94(lVar8,&stack0x00000080,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                        }
                        in_stack_00000050 = 0;
                        in_stack_00000058 = 0;
                        in_stack_00000040 = *(ulong *)(param_4 + 0x58);
                        in_stack_00000048 = 0;
                        thunk_FUN_03d233cc(&stack0x00000040);
                        in_stack_00000048 = *(ulong *)(param_4 + 0x60);
                        thunk_FUN_03d233cc(uVar17);
                        lVar18 = *(long *)puVar3;
                        in_stack_00000068 = in_stack_00000048;
                        in_stack_00000060 = in_stack_00000040;
                        in_stack_00000078 = in_stack_00000058;
                        in_stack_00000070 = in_stack_00000050;
                        lVar13 = *(long *)(lVar8 + 0x10);
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar13 != 0) {
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                            lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                            *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                            *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                            *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                            *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                            thunk_FUN_03d233cc(lVar13 + 0x20,0);
                          }
                          else {
                            in_stack_00000088 = in_stack_00000048;
                            in_stack_00000080 = in_stack_00000040;
                            fStack0000000000000098 = (float)in_stack_00000058;
                            uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                            fStack0000000000000090 = (float)in_stack_00000050;
                            fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                            FUN_0533ee94(lVar8,&stack0x00000080,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          in_stack_00000050 = 0;
                          in_stack_00000058 = 0;
                          in_stack_00000040 = *(ulong *)(param_4 + 0x90);
                          in_stack_00000048 = 0;
                          thunk_FUN_03d233cc(&stack0x00000040);
                          in_stack_00000048 = *(ulong *)(param_4 + 0x98);
                          thunk_FUN_03d233cc(uVar17);
                          lVar18 = *(long *)puVar3;
                          in_stack_00000068 = in_stack_00000048;
                          in_stack_00000060 = in_stack_00000040;
                          in_stack_00000078 = in_stack_00000058;
                          in_stack_00000070 = in_stack_00000050;
                          lVar13 = *(long *)(lVar8 + 0x10);
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                              lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
                              *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
                              *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
                              *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
                              *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
                              uVar7 = in_stack_00000040;
                              thunk_FUN_03d233cc(lVar13 + 0x20,0);
                            }
                            else {
                              in_stack_00000088 = in_stack_00000048;
                              in_stack_00000080 = in_stack_00000040;
                              fStack0000000000000098 = (float)in_stack_00000058;
                              uStack000000000000009c =
                                   (undefined4)((ulong)in_stack_00000058 >> 0x20);
                              fStack0000000000000090 = (float)in_stack_00000050;
                              fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                              uVar7 = in_stack_00000050;
                              FUN_0533ee94(lVar8,&stack0x00000080,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar6 = PTR_DAT_08e8f748;
                            puVar5 = PTR_DAT_08e8f740;
                            puVar4 = PTR_DAT_08e8ee40;
                            puVar3 = PTR_DAT_08e69670;
                            if (*(int *)(lVar8 + 0x18) < 1) goto LAB_06d8bb74;
                            iVar16 = 0;
                            goto LAB_06d8b9e0;
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            }
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            if (*(uint *)(lVar13 + 0x18) <= uVar7) {
LAB_06d8bc2c:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            in_stack_00000040 = *(ulong *)(lVar13 + uVar7 * 8 + 0x20);
            thunk_FUN_03d233cc(&stack0x00000040);
            lVar13 = *(long *)(param_4 + 0x38);
            if (lVar13 == 0) break;
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_06d8bc2c;
            in_stack_00000048 = *(ulong *)(lVar13 + (lVar18 >> 0x1d) + 0x20);
            thunk_FUN_03d233cc(uVar17);
            if (lVar8 == 0) break;
            lVar15 = *(long *)puVar3;
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000078 = in_stack_00000058;
            in_stack_00000070 = in_stack_00000050;
            lVar13 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 == 0) break;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
              *(ulong *)(lVar13 + 0x28) = in_stack_00000048;
              *(ulong *)(lVar13 + 0x20) = in_stack_00000040;
              *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
              *(ulong *)(lVar13 + 0x30) = in_stack_00000050;
              thunk_FUN_03d233cc(lVar13 + 0x20,0);
            }
            else {
              in_stack_00000088 = in_stack_00000048;
              in_stack_00000080 = in_stack_00000040;
              fStack0000000000000098 = (float)in_stack_00000058;
              uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
              fStack0000000000000090 = (float)in_stack_00000050;
              fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
              FUN_0533ee94(lVar8,&stack0x00000080,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(param_4 + 0x38);
            lVar18 = lVar18 + 0x100000000;
          } while (lVar13 != 0);
        }
        goto LAB_06d8bc00;
      }
      puVar14 = (undefined8 *)PTR_DAT_08e8ee58;
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        puVar14 = (undefined8 *)PTR_DAT_08e8ee58;
      }
    }
  }
  FUN_085a437c(*puVar14,0);
LAB_06d8b188:
  if (*(long *)(lVar2 + 0x28) != lStack00000000000000b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_06d8b9e0:
  do {
    FUN_0533eb24(&stack0x00000080,lVar8,iVar16,*(undefined8 *)puVar5);
    fVar19 = fStack0000000000000090;
    uVar9 = in_stack_00000088;
    uVar17 = in_stack_00000080;
    in_stack_000000a8 = CONCAT44(fStack0000000000000098,fStack0000000000000094);
    in_stack_000000b0 = uStack000000000000009c;
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_085decd4(uVar17,0,0);
    if ((uVar10 & 1) == 0) {
LAB_06d8bb00:
      uVar12 = FUN_06f75240(*(undefined8 *)puVar4,uVar17,uVar9,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar3);
      }
      FUN_085a48e4(uVar12,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_085decd4(uVar9,0,0);
      fVar21 = (float)uVar7;
      if ((uVar10 & 1) == 0) goto LAB_06d8bb00;
      if ((uVar9 == 0) || (fVar19 = (float)FUN_085eb198(uVar9,0), uVar17 == 0)) goto LAB_06d8bc00;
      fVar23 = param_3;
      fVar22 = fVar21;
      fVar20 = (float)FUN_085eb198(uVar17,0);
      if (DAT_09410538 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_09410538 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      param_3 = param_3 - fVar23;
      uVar7 = (ulong)(uint)(param_3 * param_3);
      fVar19 = SQRT(param_3 * param_3 +
                    (fVar19 - fVar20) * (fVar19 - fVar20) + (fVar21 - fVar22) * (fVar21 - fVar22));
    }
    uStack000000000000009c = in_stack_000000b0;
    fStack0000000000000094 = (float)in_stack_000000a8;
    fStack0000000000000098 = (float)((ulong)in_stack_000000a8 >> 0x20);
    in_stack_00000080 = uVar17;
    in_stack_00000088 = uVar9;
    fStack0000000000000090 = fVar19;
    FUN_0533eb84(lVar8,iVar16,&stack0x00000080,*(undefined8 *)puVar6);
    iVar16 = iVar16 + 1;
  } while (iVar16 < *(int *)(lVar8 + 0x18));
LAB_06d8bb74:
  puVar4 = PTR_DAT_08e8f748;
  puVar3 = PTR_DAT_08e8f740;
  lVar13 = *(long *)(param_4 + 0x38);
  if (lVar13 != 0) {
    iVar16 = 0;
    do {
      if (*(int *)(lVar13 + 0x18) + 1 <= iVar16) {
        uVar12 = FUN_05340bc4(lVar8,*(undefined8 *)PTR_DAT_08e8f728);
        *(undefined8 *)(param_4 + 0xb8) = uVar12;
        thunk_FUN_03d233cc((undefined8 *)(param_4 + 0xb8),uVar12);
        goto LAB_06d8b188;
      }
      FUN_0533eb24(&stack0x00000080,lVar8,iVar16,*(undefined8 *)puVar3);
      fStack0000000000000094 = fStack0000000000000090 / *(float *)(param_4 + 0xcc);
      fStack0000000000000098 = fStack0000000000000094;
      FUN_0533eb84(lVar8,iVar16,&stack0x00000080,*(undefined8 *)puVar4);
      lVar13 = *(long *)(param_4 + 0x38);
      iVar16 = iVar16 + 1;
    } while (lVar13 != 0);
  }
LAB_06d8bc00:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


