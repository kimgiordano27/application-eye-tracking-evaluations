/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 0366ebb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(float param_1,float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar21;
  long *plVar22;
  long unaff_x22;
  long *unaff_x23;
  int iVar23;
  float fVar24;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  fStack00000000000000c0 = param_1 + fStack00000000000000c0;
  fStack00000000000000c4 = param_2 + fStack00000000000000c4;
  param_3 = param_3 + in_stack_000000c8;
  in_stack_000000c8 = param_3;
  fVar24 = fStack00000000000000c4;
  FUN_0366f0f4();
  lVar15 = *(long *)(unaff_x20 + 0xd8);
  if (lVar15 != 0) {
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    puVar11 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_104__;
    puVar10 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_100__;
    lVar15 = *(long *)(unaff_x20 + 0x130);
    if (lVar15 != 0) {
      iVar23 = *(int *)(lVar15 + 0x18);
      iVar4 = iVar23 + -1;
      if (iVar23 < 1) {
LAB_0366ed28:
        fVar13 = in_stack_000000c8;
        uVar12 = in_stack_000000b8;
        uVar5 = in_stack_000000b0;
        uVar9 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
        if (*(char *)(unaff_x20 + 0x108) == '\0') {
          if (*(char *)(unaff_x22 + 0xe12) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x22 + 0xe12) = 1;
          }
          puVar17 = *(undefined4 **)(*unaff_x23 + 0xb8);
          uStack0000000000000098 = *puVar17;
          fVar24 = (float)puVar17[1];
          param_3 = (float)puVar17[2];
        }
        else {
          uStack0000000000000098 =
               FUN_03334a6c(unaff_x20 + 0x108,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_NesterStateTransition<FlowGraph,_ScriptGraphAsset>__ctor__
                           );
        }
        fStack0000000000000088 = fVar13;
        uStack000000000000008c = (undefined4)uVar5;
        uStack0000000000000090 = (undefined4)((ulong)uVar5 >> 0x20);
        uStack0000000000000094 = uVar12;
        uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
        uVar5 = CONCAT44(uStack000000000000008c,fVar13);
        uVar7 = CONCAT44(fVar24,uStack0000000000000098);
        uVar6 = CONCAT44(uVar12,uStack0000000000000090);
        lVar15 = *(long *)(unaff_x20 + 0xd8);
        uVar8 = CONCAT44(uStack00000000000000a4,param_3);
        in_stack_00000080 = uVar9;
        fStack000000000000009c = fVar24;
        fStack00000000000000a0 = param_3;
        if (lVar15 != 0) {
          lVar18 = *(long *)puVar10;
          lVar16 = *(long *)(lVar15 + 0x10);
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          _uStack00000000000000d0 = uVar9;
          in_stack_000000d8 = uVar5;
          in_stack_000000e0 = uVar6;
          in_stack_000000e8 = uVar7;
          in_stack_000000f0 = uVar8;
          if (lVar16 != 0) {
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              lVar16 = lVar16 + (long)(int)uVar3 * 0x28;
              *(undefined8 *)(lVar16 + 0x40) = uVar8;
              *(undefined8 *)(lVar16 + 0x28) = uVar5;
              *(undefined8 *)(lVar16 + 0x20) = uVar9;
              *(undefined8 *)(lVar16 + 0x38) = uVar7;
              *(undefined8 *)(lVar16 + 0x30) = uVar6;
            }
            else {
              _fStack0000000000000040 = uVar9;
              _uStack0000000000000048 = uVar5;
              in_stack_00000050 = uVar6;
              in_stack_00000058 = uVar7;
              _uStack0000000000000060 = uVar8;
              FUN_03133480(lVar15,&stack0x00000040,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = *(long *)(unaff_x20 + 0xe0);
            if (lVar15 != 0) {
              (**(code **)(lVar15 + 0x18))
                        (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                         *(undefined8 *)(lVar15 + 0x28));
              lVar15 = *(long *)(unaff_x20 + 0x130);
              if (lVar15 != 0) {
                *(undefined4 *)(lVar15 + 0x18) = 0;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                plVar22 = *(long **)(unaff_x20 + 0x78);
                *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
                if (plVar22 != (long *)0x0) {
                  lVar15 = *plVar22;
                  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar19 != 0) {
                    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) ==
                          *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__)
                      {
                        puVar14 = (undefined8 *)(lVar15 + (long)(*piVar20 + 3) * 0x10 + 0x138);
                        goto LAB_0366eed0;
                      }
                      uVar19 = uVar19 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar14 = (undefined8 *)
                            FUN_01ecb238(plVar22,*(long *)
                                                  Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__
                                         ,3);
LAB_0366eed0:
                  (*(code *)*puVar14)(plVar22,puVar14[1]);
                  unaff_x19[4] = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
                  unaff_x19[1] = CONCAT44(uStack000000000000008c,fStack0000000000000088);
                  *unaff_x19 = in_stack_00000080;
                  unaff_x19[3] = CONCAT44(fStack000000000000009c,uStack0000000000000098);
                  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
                  return;
                }
              }
            }
          }
        }
      }
      else {
        iVar21 = *(int *)(unaff_x20 + 0x138);
        if (*(int *)(unaff_x20 + 0x138) < 0) {
          iVar21 = iVar4;
        }
        do {
          FUN_03227960(&stack0x00000040,lVar15,iVar21,*(undefined8 *)puVar11);
          uVar9 = _fStack0000000000000040;
          param_3 = fStack0000000000000040;
          fVar24 = fStack0000000000000044;
          uVar3 = uStack0000000000000048;
          lVar15 = *(long *)(unaff_x20 + 0xd8);
          if (lVar15 == 0) break;
          uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
          lVar16 = *(long *)(lVar15 + 0x10);
          lVar18 = *(long *)puVar10;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar16 == 0) break;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar2 * 0x28;
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar16 + 0x20) = in_stack_00000058._4_4_;
            *(undefined4 *)(lVar16 + 0x24) = uStack0000000000000060;
            *(undefined4 *)(lVar16 + 0x28) = uStack0000000000000064;
            *(undefined4 *)(lVar16 + 0x2c) = uStack0000000000000068;
            *(undefined4 *)(lVar16 + 0x30) = uStack000000000000006c;
            *(undefined4 *)(lVar16 + 0x34) = in_stack_00000070;
            *(float *)(lVar16 + 0x38) = fStack0000000000000040;
            *(float *)(lVar16 + 0x3c) = fStack0000000000000044;
            *(uint *)(lVar16 + 0x40) = uStack0000000000000048;
            *(undefined1 *)(lVar16 + 0x44) = 0;
            *(undefined1 *)(lVar16 + 0x47) = in_stack_00000078._6_1_;
            *(undefined2 *)(lVar16 + 0x45) = in_stack_00000078._4_2_;
          }
          else {
            _fStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
            _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
            in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
            in_stack_00000058 = uVar9;
            _uStack0000000000000060 =
                 CONCAT17(in_stack_00000078._6_1_,CONCAT25(in_stack_00000078._4_2_,(uint5)uVar3));
            FUN_03133480(lVar15,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          iVar23 = iVar23 + -1;
          if (iVar23 == 0) goto LAB_0366ed28;
          lVar15 = *(long *)(unaff_x20 + 0x130);
          iVar1 = iVar21 + -1;
          if (iVar21 + -1 < 0) {
            iVar1 = iVar4;
          }
          iVar21 = iVar1;
        } while (lVar15 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


