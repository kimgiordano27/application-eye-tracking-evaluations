/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03722890
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_SpaceDiscoveryResult>
              (void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x22;
  undefined *puVar13;
  int unaff_w24;
  undefined8 uVar14;
  long unaff_x27;
  int iVar15;
  long *plVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int iStack000000000000008c;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0e420);
  FUN_02d965b8(PTR_DAT_06a0e428);
  FUN_02d965b8(PTR_DAT_06a0e4c0);
                    /* try { // try from 037228b8 to 0382292b has its CatchHandler @ 03722c1c */
  FUN_02d965b8(PTR_DAT_06a0e4c8);
  FUN_02d965b8(PTR_DAT_06a0e4d0);
  FUN_02d965b8(PTR_DAT_06a0e430);
  FUN_02d965b8(PTR_DAT_06a0e4d8);
  FUN_02d965b8(PTR_DAT_06a0e4e0);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_02dcfd74();
  }
  puVar13 = PTR_DAT_06a002a8;
  in_stack_00000090 = 0;
  in_stack_00000098 = (undefined8 *)0x0;
  iStack000000000000008c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_0363e780(*(undefined8 *)PTR_DAT_06a0e470);
  FUN_05ec3354(&stack0x00000098,uVar2,2,0xffffffff,0);
  in_stack_00000050 = 0;
  lVar8 = *in_stack_00000020;
  in_stack_00000058 = &stack0x00000098;
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar13 = PTR_DAT_069fb9c0;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = *(long *)(unaff_x27 + 0x30);
  uVar14 = **(undefined8 **)(unaff_x20 + 0x38);
  iVar15 = *(int *)(lVar8 + 8);
  if (*(int *)(lVar8 + 8) <= *(int *)(lVar8 + 0xc)) {
    iVar15 = *(int *)(lVar8 + 0xc);
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar14 = FUN_054f73b4(uVar14,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(uVar14,uVar14);
  }
  uVar2 = FUN_04edb670(lVar11,uVar14,*(undefined8 *)PTR_DAT_06a0e4a8);
  FUN_05ebf070(in_stack_00000098,uVar2,0);
  FUN_05ebf070(in_stack_00000098,iVar15,0);
  plVar12 = (long *)*unaff_x22;
  if (plVar12 != (long *)0x0) {
    iVar15 = 0;
    plVar16 = (long *)PTR_DAT_06a0e388;
    do {
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *plVar16) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03722a54;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar12,*plVar16,0);
LAB_03722a54:
      iVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (iVar3 <= iVar15) {
        lVar8 = *in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (in_stack_00000098 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar15 = *(int *)(lVar8 + 8);
        if (*(int *)(lVar8 + 8) <= *(int *)(lVar8 + 0xc)) {
          iVar15 = *(int *)(lVar8 + 0xc);
        }
        iVar3 = *(int *)(in_stack_00000098 + 1);
        if (*(int *)(in_stack_00000098 + 1) <= *(int *)((long)in_stack_00000098 + 0xc)) {
          iVar3 = *(int *)((long)in_stack_00000098 + 0xc);
        }
        if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05ec33fc(in_stack_00000058,0);
        if (in_stack_00000050 == 0) {
          return iVar3 + iVar15;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
      plVar12 = (long *)*unaff_x22;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar12;
      lVar11 = *(long *)(unaff_x27 + 0x40);
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a0e390) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03722ac8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_06a0e390,0);
LAB_03722ac8:
      uVar14 = (*(code *)*puVar4)(plVar12,iVar15,puVar4[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar14,uVar14);
      }
      uVar6 = FUN_03c5ecb0(lVar11,uVar14,*(undefined8 *)PTR_DAT_06a0e4b8);
      if ((uVar6 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x20 + 0x38);
        if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar14 = FUN_054f73b4(uVar14,0);
        lVar8 = *(long *)PTR_DAT_06a0e430;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)PTR_DAT_06a0e430;
        }
        uVar6 = FUN_05501380(uVar14,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
        if ((uVar6 & 1) != 0) {
          uVar14 = **(undefined8 **)(unaff_x20 + 0x38);
          if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_054f73b4(uVar14,0);
          plVar12 = (long *)*unaff_x22;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a0e390) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03722be0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_06a0e390,0);
LAB_03722be0:
          (*(code *)*puVar4)(plVar12,iVar15,puVar4[1]);
          iVar3 = FUN_036fcddc();
          if ((iVar3 < 0) || (iVar3 != in_stack_00000008._4_4_)) goto LAB_0372357c;
        }
        plVar12 = (long *)*unaff_x22;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a0e390) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03722c74;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_06a0e390,0);
LAB_03722c74:
        uVar14 = (*(code *)*puVar4)(plVar12,iVar15,puVar4[1]);
        uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054f73b4(uVar9,0);
        uVar6 = FUN_05e93660();
        puVar13 = PTR_DAT_069fb9c0;
        plVar16 = (long *)PTR_DAT_06a0e388;
        if ((uVar6 & 1) != 0) {
          if (unaff_w24 == 4) {
            iVar3 = *(int *)(unaff_x27 + 0x90);
          }
          else {
            if (*(long *)(unaff_x27 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar6 = FUN_04fec74c(*(long *)(unaff_x27 + 0x98),uVar14,&stack0x0000008c,
                                 *(undefined8 *)PTR_DAT_06a0e4a0);
            lVar8 = *in_stack_00000020;
            iVar3 = iStack000000000000008c;
            if ((uVar6 & 1) == 0) {
              iVar3 = in_stack_00000018._4_4_;
            }
            if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            puVar13 = PTR_DAT_069fb9c0;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000018._4_4_ = iVar3;
            if (iVar3 <= *(int *)(lVar8 + 8)) {
              in_stack_00000030 = uVar14;
              uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000030)
              ;
              plVar16 = (long *)PTR_DAT_06a0e388;
              uVar9 = **(undefined8 **)(unaff_x20 + 0x38);
              if (*(int *)(*(long *)(puVar13 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              plVar12 = (long *)FUN_054f73b4(uVar9,0);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar9 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370));
              uVar14 = FUN_0536e0dc(*(undefined8 *)PTR_DAT_06a0e4d8,uVar14,uVar9,0);
              if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_0630bbe4(uVar14,0);
              goto LAB_0372357c;
            }
          }
          lVar8 = *(long *)(unaff_x27 + 0x60);
          if (lVar8 == 0) {
LAB_03723624:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar10 = 0;
          while (iVar10 < *(int *)(lVar8 + 0x18)) {
            plVar12 = (long *)FUN_0400ff1c(lVar8,iVar10,*(undefined8 *)PTR_DAT_06a0e428);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *plVar12;
            lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)(lVar11 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03722dd8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            lVar8 = FUN_02dd004c(plVar12);
LAB_03722dd8:
            lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar11);
            (**(code **)(lVar8 + 8))(plVar12,uVar14);
            lVar8 = *(long *)(unaff_x27 + 0x60);
            iVar10 = iVar10 + 1;
            if (lVar8 == 0) goto LAB_03723624;
          }
          if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = FUN_04fd95d0(*(long *)(unaff_x27 + 0x38),uVar14,*(undefined8 *)PTR_DAT_06a0e4b0);
          in_stack_00000090 = lVar8;
          if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06a0e4d0 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar11 = in_stack_00000090;
          if (*(int *)(lVar8 + 8) == 0) {
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            FUN_05e940e0(&stack0x00000030,unaff_w24,iVar3,3,in_stack_00000018._4_4_,0);
            in_stack_00000068 = in_stack_00000038;
            in_stack_00000060 = in_stack_00000030;
            in_stack_00000078 = in_stack_00000048;
            in_stack_00000070 = in_stack_00000040;
            FUN_042cdc58(&stack0x00000090,&stack0x00000060,*(undefined8 *)PTR_DAT_06a0e4c0);
            lVar8 = FUN_042cdacc(&stack0x00000090,0,*(undefined8 *)PTR_DAT_06a0e4c8);
            if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (DAT_06db599b == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db599b = '\x01';
            }
            if (*(long *)(lVar8 + 0x10) == 0) {
LAB_03723660:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar3 = FUN_054e9258(0x10,uVar2,0);
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 == 0) goto LAB_03723660;
LAB_037230ec:
            iVar10 = *(int *)(lVar8 + 8);
            if ((*(int *)(lVar8 + 0xc) < iVar10) && (iVar3 < iVar10)) {
              *(int *)(lVar8 + 0xc) = iVar10;
            }
            *(int *)(lVar8 + 8) = iVar3;
          }
          else {
            if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06a0e4d0 + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            lVar8 = FUN_042cdacc(&stack0x00000090,*(int *)(lVar11 + 8) + -1,
                                 *(undefined8 *)PTR_DAT_06a0e4c8);
            if (*(int *)(lVar8 + 0x18) != unaff_w24) {
LAB_03722f10:
              in_stack_00000038 = 0;
              in_stack_00000030 = 0;
              in_stack_00000048 = 0;
              in_stack_00000040 = 0;
              FUN_05e940e0(&stack0x00000030,unaff_w24,iVar3,3,in_stack_00000018._4_4_,0);
              in_stack_00000068 = in_stack_00000038;
              in_stack_00000060 = in_stack_00000030;
              in_stack_00000078 = in_stack_00000048;
              in_stack_00000070 = in_stack_00000040;
              FUN_042cdc58(&stack0x00000090,&stack0x00000060,*(undefined8 *)PTR_DAT_06a0e4c0);
              lVar8 = in_stack_00000090;
              if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06a0e4d0 + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18();
              }
              lVar8 = FUN_042cdacc(&stack0x00000090,*(int *)(lVar8 + 8) + -1,
                                   *(undefined8 *)PTR_DAT_06a0e4c8);
              if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06db599b == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db599b = '\x01';
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0372365c:
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x10);
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              iVar3 = FUN_054e9258(0x10,uVar2,0);
              lVar8 = *(long *)(lVar8 + 0x10);
              if (lVar8 == 0) goto LAB_0372365c;
              goto LAB_037230ec;
            }
            if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = *in_stack_00000020;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (in_stack_00000098 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar10 = *(int *)(lVar11 + 8);
            if (*(int *)(lVar11 + 8) <= *(int *)(lVar11 + 0xc)) {
              iVar10 = *(int *)(lVar11 + 0xc);
            }
            iVar1 = *(int *)(in_stack_00000098 + 1);
            if (*(int *)(in_stack_00000098 + 1) <= *(int *)((long)in_stack_00000098 + 0xc)) {
              iVar1 = *(int *)((long)in_stack_00000098 + 0xc);
            }
            if (*(int *)(lVar8 + 0x14) - *(int *)(lVar8 + 8) < iVar1 + iVar10) goto LAB_03722f10;
          }
          lVar8 = in_stack_00000090;
          if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06a0e4d0 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar8 = FUN_042cdacc(&stack0x00000090,*(int *)(lVar8 + 8) + -1,
                               *(undefined8 *)PTR_DAT_06a0e4c8);
          lVar11 = *in_stack_00000020;
          if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (in_stack_00000098 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar3 = *(int *)(lVar11 + 8);
          if (*(int *)(lVar11 + 8) <= *(int *)(lVar11 + 0xc)) {
            iVar3 = *(int *)(lVar11 + 0xc);
          }
          iVar10 = *(int *)(in_stack_00000098 + 1);
          if (*(int *)(in_stack_00000098 + 1) <= *(int *)((long)in_stack_00000098 + 0xc)) {
            iVar10 = *(int *)((long)in_stack_00000098 + 0xc);
          }
          if (DAT_06db59a2 == '\0') {
            FUN_02d965b8(PTR_DAT_06a002a8);
            DAT_06db59a2 = '\x01';
          }
          lVar11 = *(long *)(lVar8 + 0x10);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar1 = *(int *)(lVar11 + 8) + iVar10 + iVar3;
          if (*(int *)(lVar11 + 0x10) < iVar1) {
            if (*(int *)(lVar11 + 0x14) < iVar1) {
              lVar11 = *in_stack_00000020;
              if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              plVar16 = (long *)PTR_DAT_06a0e388;
              puVar13 = PTR_DAT_069fb9c0;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (in_stack_00000098 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              iVar3 = *(int *)(lVar11 + 8);
              if (*(int *)(lVar11 + 8) <= *(int *)(lVar11 + 0xc)) {
                iVar3 = *(int *)(lVar11 + 0xc);
              }
              iVar10 = *(int *)(in_stack_00000098 + 1);
              if (*(int *)(in_stack_00000098 + 1) <= *(int *)((long)in_stack_00000098 + 0xc)) {
                iVar10 = *(int *)((long)in_stack_00000098 + 0xc);
              }
              in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar10 + iVar3);
              uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000030)
              ;
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uStack000000000000002c = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 8);
              uVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar13 + 0x48),(long)&stack0x00000028 + 4)
              ;
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uStack0000000000000028 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x10);
              uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar13 + 0x48),&stack0x00000028);
              uVar14 = FUN_0536e120(*(undefined8 *)PTR_DAT_06a0e4e0,uVar14,uVar9,uVar5,0);
              if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_0630bbe4(uVar14,0);
              goto LAB_0372357c;
            }
            if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05ebbb2c(lVar8 + 0x10,iVar10 + iVar3,0);
          }
          if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (in_stack_00000098 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar12 = *(long **)(lVar8 + 0x10);
          iVar3 = *(int *)(in_stack_00000098 + 1);
          if (*(int *)(in_stack_00000098 + 1) <= *(int *)((long)in_stack_00000098 + 0xc)) {
            iVar3 = *(int *)((long)in_stack_00000098 + 0xc);
          }
          if (plVar12 == (long *)0x0) {
LAB_03723648:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_062ffb9c((long)(int)plVar12[1] + *plVar12,*in_stack_00000098,(long)iVar3,0);
          plVar12 = *(long **)(lVar8 + 0x10);
          if (plVar12 == (long *)0x0) goto LAB_03723648;
          iVar3 = (int)plVar12[1] + iVar3;
          *(int *)(plVar12 + 1) = iVar3;
          puVar4 = (undefined8 *)*in_stack_00000020;
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar10 = *(int *)(puVar4 + 1);
          if (*(int *)(puVar4 + 1) <= *(int *)((long)puVar4 + 0xc)) {
            iVar10 = *(int *)((long)puVar4 + 0xc);
          }
          FUN_062ffb9c(*plVar12 + (long)iVar3,*puVar4,(long)iVar10,0);
          lVar11 = *(long *)(lVar8 + 0x10);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + iVar10;
          *(short *)(lVar8 + 2) = *(short *)(lVar8 + 2) + 1;
          lVar8 = *(long *)(unaff_x27 + 0x60);
          if (lVar8 == 0) {
LAB_0372362c:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar3 = 0;
          while (puVar13 = PTR_DAT_069fb9c0, plVar16 = (long *)PTR_DAT_06a0e388,
                iVar3 < *(int *)(lVar8 + 0x18)) {
            plVar12 = (long *)FUN_0400ff1c(lVar8,iVar3,*(undefined8 *)PTR_DAT_06a0e428);
            lVar8 = *in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if ((in_stack_00000098 == (undefined8 *)0x0) || (plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *plVar12;
            lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)(lVar11 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_0372352c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            lVar8 = FUN_02dd004c(plVar12);
LAB_0372352c:
            lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar11);
            (**(code **)(lVar8 + 8))(plVar12,uVar14);
            lVar8 = *(long *)(unaff_x27 + 0x60);
            iVar3 = iVar3 + 1;
            if (lVar8 == 0) goto LAB_0372362c;
          }
        }
      }
LAB_0372357c:
      plVar12 = (long *)*unaff_x22;
      iVar15 = iVar15 + 1;
    } while (plVar12 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


