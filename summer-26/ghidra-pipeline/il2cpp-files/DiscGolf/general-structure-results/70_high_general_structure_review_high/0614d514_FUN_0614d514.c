/*
FUNCTION_NAME: FUN_0614d514
ENTRY_POINT: 0614d514
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


undefined4 FUN_0614d514(undefined1 param_1 [16],ulong param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  float fVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  long *unaff_x19;
  uint uVar27;
  undefined4 unaff_w21;
  long lVar28;
  long *plVar29;
  long unaff_x23;
  long *plVar30;
  long unaff_x24;
  uint unaff_w25;
  undefined8 uVar31;
  long unaff_x26;
  uint *unaff_x27;
  long *unaff_x29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  uint uStack0000000000000158;
  undefined1 uStack000000000000015c;
  
code_r0x0614d514:
  param_3 = param_3 & 0xffff;
  uVar13 = unaff_w25;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_hoverExited:
  uVar21 = uVar13 + 1;
  if ((int)uVar21 < (int)*(uint *)(unaff_x24 + 0x18)) {
    if (*(uint *)(unaff_x24 + 0x18) <= uVar21) goto LAB_0614f13c;
    uVar27 = *(uint *)(in_stack_00000058 + (long)(int)uVar21 * 0x10 + 4);
  }
  else {
    uVar27 = 0;
  }
  uVar10 = param_3;
  if (*(char *)(unaff_x26 + 0x33b) == '\0') {
LAB_0614d6a4:
    lVar15 = FUN_06189808(unaff_x26,param_3,*(undefined8 *)(unaff_x26 + 0x100),
                          *(undefined4 *)(unaff_x26 + 0x284),*(undefined4 *)(unaff_x26 + 0x23c),
                          (long)&stack0x00000158 + 4,0);
    if (lVar15 == 0) {
      if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_0614f13c;
      FUN_06189ea0(unaff_x26,param_3,*(undefined4 *)(in_stack_00000058 + unaff_x23 * 0x10 + 8),
                   *(undefined8 *)(unaff_x26 + 0x100),0);
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      iVar8 = FUN_0619eb08(0);
      bVar7 = *(uint *)(unaff_x24 + 0x18) <= uVar13;
      if (iVar8 == 0) {
        if (bVar7) goto LAB_0614f13c;
        uVar10 = 0x25a1;
      }
      else {
        if (bVar7) goto LAB_0614f13c;
        if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4
                    ) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_0619eb08(0);
      }
      *unaff_x27 = uVar10;
      uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
      if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4) == 0
         ) {
        thunk_FUN_02df485c();
      }
      lVar15 = FUN_061669cc(uVar10,uVar31,1,0,400,(long)&stack0x00000158 + 4,0);
      if (lVar15 == 0) {
        if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4
                    ) == 0) {
          thunk_FUN_02df485c();
        }
        lVar15 = FUN_0619f080(0);
        if (lVar15 != 0) {
          if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                      0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar15 = FUN_0619f080(0);
          if (lVar15 == 0) goto LAB_0614f0a4;
          if (0 < *(int *)(lVar15 + 0x18)) {
            uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
            if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar16 = FUN_0619f080(0);
            if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4
                        ) == 0) {
              thunk_FUN_02df485c(*(long *)
                                  Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__);
            }
            lVar15 = FUN_06167110(uVar10,uVar31,uVar16,1,0,400,(long)&stack0x00000158 + 4,0);
            unaff_x26 = in_stack_00000050;
            if (lVar15 != 0) goto LAB_0614d860;
          }
        }
        if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4
                    ) == 0) {
          thunk_FUN_02df485c();
        }
        uVar31 = FUN_0619ec7c(0);
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
        }
        uVar14 = FUN_0634eb94(uVar31,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                      0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar31 = FUN_0619ec7c(0);
          if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4)
              == 0) {
            thunk_FUN_02df485c(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__)
            ;
          }
          lVar15 = FUN_061669cc(uVar10,uVar31,1,0,400,(long)&stack0x00000158 + 4,0);
          if (lVar15 != 0) goto LAB_0614d860;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_0614f13c;
        *unaff_x27 = 0x20;
        uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
        if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        uVar10 = 0x20;
        lVar15 = FUN_061669cc(0x20,uVar31,1,0,400,(long)&stack0x00000158 + 4,0);
        if (lVar15 == 0) {
          if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_0614f13c;
          *unaff_x27 = 3;
          uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
          if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4)
              == 0) {
            thunk_FUN_02df485c();
          }
          uVar10 = 3;
          lVar15 = FUN_061669cc(3,uVar31,1,0,400,(long)&stack0x00000158 + 4,0);
        }
      }
LAB_0614d860:
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      uVar14 = FUN_0619ec20(0);
      if ((uVar14 & 1) == 0) {
        plVar23 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
        if (param_3 >> 0x10 == 0) {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,param_3);
          lVar22 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&stack0x00000060);
          if (plVar23 == (long *)0x0) goto LAB_0614f0a4;
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((int)plVar23[3] == 0) goto LAB_0614f13c;
          plVar23[4] = lVar22;
          LeanTween__value(plVar23 + 4,lVar22);
          if (*(long *)(unaff_x26 + 0xf8) == 0) goto LAB_0614f0a4;
          lVar22 = thunk_FUN_06354368(*(long *)(unaff_x26 + 0xf8),0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((*(uint *)(plVar23 + 3) & 0xfffffffe) == 0) goto LAB_0614f13c;
          plVar23[5] = lVar22;
          LeanTween__value(plVar23 + 5,lVar22);
          if (lVar15 == 0) goto LAB_0614f0a4;
          in_stack_000000f0 = *(undefined4 *)(lVar15 + 0x14);
          lVar22 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&stack0x000000f0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if (*(uint *)(plVar23 + 3) < 3) goto LAB_0614f13c;
          plVar23[6] = lVar22;
          LeanTween__value(plVar23 + 6,lVar22);
          lVar22 = thunk_FUN_06354368(unaff_x26,0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((*(uint *)(plVar23 + 3) & 0xfffffffc) == 0) goto LAB_0614f13c;
          plVar23[7] = lVar22;
          LeanTween__value(plVar23 + 7,lVar22);
          puVar17 = (undefined8 *)Method_System_Globalization_HijriCalendar_ToDateTime__;
        }
        else {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,param_3);
          lVar22 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&stack0x00000060);
          if (plVar23 == (long *)0x0) goto LAB_0614f0a4;
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((int)plVar23[3] == 0) goto LAB_0614f13c;
          plVar23[4] = lVar22;
          LeanTween__value(plVar23 + 4,lVar22);
          if (*(long *)(unaff_x26 + 0xf8) == 0) goto LAB_0614f0a4;
          lVar22 = thunk_FUN_06354368(*(long *)(unaff_x26 + 0xf8),0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((*(uint *)(plVar23 + 3) & 0xfffffffe) == 0) goto LAB_0614f13c;
          plVar23[5] = lVar22;
          LeanTween__value(plVar23 + 5,lVar22);
          if (lVar15 == 0) goto LAB_0614f0a4;
          in_stack_000000f0 = *(undefined4 *)(lVar15 + 0x14);
          lVar22 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&stack0x000000f0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if (*(uint *)(plVar23 + 3) < 3) goto LAB_0614f13c;
          plVar23[6] = lVar22;
          LeanTween__value(plVar23 + 6,lVar22);
          lVar22 = thunk_FUN_06354368(unaff_x26,0);
          if ((lVar22 != 0) &&
             (lVar28 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar23 + 0x40)), lVar28 == 0))
          goto LAB_0614f140;
          if ((*(uint *)(plVar23 + 3) & 0xfffffffc) == 0) goto LAB_0614f13c;
          plVar23[7] = lVar22;
          LeanTween__value(plVar23 + 7,lVar22);
          puVar17 = (undefined8 *)Method_System_Globalization_HijriCalendar_GetDatePart__;
        }
        uVar31 = FUN_0536e164(*puVar17,plVar23,0);
        unaff_x29 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630c038(uVar31,unaff_x26,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar14 = FUN_061a9474(param_3,0);
    if (((uVar14 & 1) == 0) || (uVar27 == 0xfe0e)) {
      if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar14 = FUN_061a93f4(param_3,0);
      if (((uVar14 & 1) == 0) || (uVar27 != 0xfe0f)) goto LAB_0614d6a4;
    }
    if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4) ==
        0) {
      thunk_FUN_02df485c();
    }
    lVar15 = FUN_0619f490(0);
    if (lVar15 == 0) goto LAB_0614d6a4;
    if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4) ==
        0) {
      thunk_FUN_02df485c();
    }
    lVar15 = FUN_0619f490(0);
    if (lVar15 == 0) goto LAB_0614f0a4;
    if (*(int *)(lVar15 + 0x18) < 1) goto LAB_0614d6a4;
    uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
    if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4) ==
        0) {
      thunk_FUN_02df485c();
    }
    uVar16 = FUN_0619f490(0);
    uVar12 = *(undefined4 *)(unaff_x26 + 0x280);
    uVar2 = *(undefined4 *)(unaff_x26 + 0x238);
    if (*(int *)(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__ + 0xe4) == 0)
    {
      thunk_FUN_02df485c(*(long *)Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__);
    }
    lVar15 = FUN_0616732c(param_3,uVar31,uVar16,1,uVar12,uVar2,(long)&stack0x00000158 + 4,0);
    unaff_x26 = in_stack_00000050;
    unaff_x29 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
    if (lVar15 == 0) goto LAB_0614d6a4;
  }
  if ((*unaff_x19 == 0) || (lVar22 = *(long *)(*unaff_x19 + 0x38), lVar22 == 0)) goto LAB_0614f0a4;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x4a0)) goto LAB_0614f13c;
  puVar17 = (undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178 + 0x38);
  *puVar17 = 0;
  LeanTween__value(puVar17,0);
  if (lVar15 == 0) goto LAB_0614f0a4;
  if (*(char *)(lVar15 + 0x10) == '\x01') {
    if (*(long *)(lVar15 + 0x18) == 0) goto LAB_0614f0a4;
    iVar8 = FUN_061524c0(*(long *)(lVar15 + 0x18),0);
    if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
    iVar9 = FUN_061524c0(*(long *)(unaff_x26 + 0x100),0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar23 = *(long **)(lVar15 + 0x18);
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        *(undefined8 *)(unaff_x26 + 0x100) = 0;
      }
      else {
        lVar22 = *(long *)
                  Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<RangeConditionHeaderValue>__
        ;
        bVar3 = *(byte *)(lVar22 + 0x130);
        if (*(byte *)(*plVar23 + 0x130) < bVar3) {
          plVar29 = (long *)0x0;
        }
        else {
          plVar29 = plVar23;
          if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar22) {
            plVar29 = (long *)0x0;
          }
        }
        *(long **)(unaff_x26 + 0x100) = plVar29;
        if (*(byte *)(*plVar23 + 0x130) < bVar3) {
          plVar23 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar22) {
          plVar23 = (long *)0x0;
        }
      }
      LeanTween__value(unaff_x26 + 0x100,plVar23);
    }
    if ((uVar27 >> 4 == 0xfe0) || (uVar27 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
      iVar8 = FUN_0615fd90(*(long *)(unaff_x26 + 0x100),uVar10,uVar27,0);
      if (iVar8 != 0) {
        if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
        uVar14 = FUN_061621f0(*(long *)(unaff_x26 + 0x100),iVar8,&stack0x00000140,0);
        if ((uVar14 & 1) != 0) {
          if ((*unaff_x19 == 0) || (lVar22 = *(long *)(*unaff_x19 + 0x38), lVar22 == 0))
          goto LAB_0614f0a4;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x4a0)) goto LAB_0614f13c;
          *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000140;
          LeanTween__value();
        }
      }
      if (*(uint *)(unaff_x24 + 0x18) <= uVar21) goto LAB_0614f13c;
      *(undefined4 *)(in_stack_00000058 + (long)(int)uVar21 * 0x10 + 4) = 0x1a;
      uVar13 = uVar21;
    }
    if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_0614e0b8;
    if (((*(long *)(unaff_x26 + 0x100) == 0) ||
        (lVar22 = *(long *)(*(long *)(unaff_x26 + 0x100) + 0x178), lVar22 == 0)) ||
       (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0)) goto LAB_0614f0a4;
    uVar14 = FUN_04f96670(lVar22,*(undefined4 *)(lVar15 + 0x28),&stack0x00000148,
                          *(undefined8 *)
                           Method_Unity_Hierarchy_HierarchyNodeChildren_ThrowIfVersionChanged__);
    if ((uVar14 & 1) != 0) {
      if (in_stack_00000148 == 0) {
LAB_0614e75c:
        if (*(char *)(unaff_x26 + 0x42d) != '\0') {
          *(undefined1 *)(unaff_x26 + 0x42d) = 0;
          in_stack_00000050 = unaff_x26;
          goto LAB_0614e768;
        }
        lVar15 = *unaff_x19;
        if (lVar15 == 0) goto LAB_0614f0a4;
        lVar22 = *unaff_x29;
        *(int *)(lVar15 + 0x1c) = in_stack_00000040;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar22 = *unaff_x29;
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
        if (lVar22 == 0) goto LAB_0614f0a4;
        uVar13 = FUN_04d8c0e0(lVar22,*(undefined8 *)
                                      Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<ContentRangeHeaderValue>__
                             );
        *(uint *)(lVar15 + 0x34) = uVar13;
        plVar23 = (long *)Method_System_HashCode_Add<bool>__;
        if (*in_stack_00000048 == 0) goto LAB_0614f0a4;
        plVar29 = (long *)(*in_stack_00000048 + 0x60);
        lVar15 = *plVar29;
        if (lVar15 == 0) goto LAB_0614f0a4;
        uVar14 = (ulong)uVar13;
        if (*(int *)(lVar15 + 0x18) < (int)uVar13) {
          if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0383eeb0(plVar29,uVar14,0,
                       *(undefined8 *)
                        Method_System_Globalization_HijriCalendar_CheckYearMonthRange__);
        }
        if (*(long *)(unaff_x26 + 0x720) == 0) goto LAB_0614f0a4;
        plVar29 = (long *)(unaff_x26 + 0x720);
        if (*(int *)(*(long *)(unaff_x26 + 0x720) + 0x18) < (int)uVar13) {
          uVar21 = uVar13 | (int)uVar13 >> 0x10;
          uVar21 = uVar21 | (int)uVar21 >> 8;
          uVar21 = uVar21 | (int)uVar21 >> 4;
          uVar21 = uVar21 | (int)uVar21 >> 2;
          if (*(int *)(*plVar23 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0383ebd4(plVar29,(uVar21 | (int)uVar21 >> 1) + 1,
                       *(undefined8 *)Method_System_Net_HttpListenerRequest_SetRequestLine__);
          plVar23 = (long *)Method_System_HashCode_Add<bool>__;
        }
        if (*(char *)(unaff_x26 + 0x359) != '\0') {
          if (*in_stack_00000048 == 0) goto LAB_0614f0a4;
          plVar30 = (long *)(*in_stack_00000048 + 0x38);
          lVar15 = *plVar30;
          if (lVar15 == 0) goto LAB_0614f0a4;
          iVar8 = *(int *)(unaff_x26 + 0x4a0);
          if (0x100 < *(int *)(lVar15 + 0x18) - iVar8) {
            iVar9 = 0x100;
            if (0x100 < iVar8 + 1) {
              iVar9 = iVar8 + 1;
            }
            if (*(int *)(*plVar23 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0383ee04(plVar30,iVar9,1,
                         *(undefined8 *)Method_System_Globalization_HijriCalendar_CheckTicksRange__)
            ;
          }
        }
        puVar6 = Method_UnityEngine_Hash128_Append<bool>__;
        fVar5 = DAT_010fcd4c;
        if ((int)uVar13 < 1) goto LAB_0614efe4;
        lVar15 = 0;
        uVar18 = 0;
        lVar22 = 0x54;
        lVar28 = 0x20;
        goto LAB_0614e924;
      }
      iVar8 = 0;
      while (unaff_x19 = in_stack_00000048, iVar8 < *(int *)(in_stack_00000148 + 0x18)) {
        auVar36 = FUN_03fca1fc(in_stack_00000148,iVar8,
                               *(undefined8 *)Method_Unity_Hierarchy_HierarchyViewModel_get_Item__);
        lVar22 = auVar36._0_8_;
        if (lVar22 == 0) goto LAB_0614f0a4;
        uVar14 = *(ulong *)(lVar22 + 0x18);
        iVar9 = (int)uVar14;
        if (1 < iVar9) {
          lVar28 = 0;
          do {
            uVar21 = uVar13 + 1 + (int)lVar28;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar21) goto LAB_0614f13c;
            if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
            iVar11 = FUN_0615fcb4(*(long *)(unaff_x26 + 0x100),
                                  *(undefined4 *)(in_stack_00000058 + (long)(int)uVar21 * 0x10 + 4),
                                  0);
            if (*(uint *)(lVar22 + 0x18) <= (int)lVar28 + 1U) goto LAB_0614f13c;
            unaff_x26 = in_stack_00000050;
            if (iVar11 != *(int *)(lVar22 + 0x24 + lVar28 * 4)) goto LAB_0614dfd4;
            lVar28 = lVar28 + 1;
          } while (iVar9 + -1 != (int)lVar28);
        }
        if (auVar36._8_4_ != 0) {
          if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
          uVar18 = FUN_061621f0(*(long *)(unaff_x26 + 0x100),auVar36._8_8_ & 0xffffffff,
                                &stack0x00000138,0);
          if ((uVar18 & 1) != 0) {
            if ((*in_stack_00000048 == 0) ||
               (lVar22 = *(long *)(*in_stack_00000048 + 0x38), lVar22 == 0)) goto LAB_0614f0a4;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x4a0)) goto LAB_0614f13c;
            *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_00000138;
            LeanTween__value();
            unaff_x29 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            if (iVar9 < 1) goto LAB_0614e0b0;
            uVar18 = 0;
            goto LAB_0614e06c;
          }
        }
LAB_0614dfd4:
        iVar8 = iVar8 + 1;
        unaff_x29 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
        if (in_stack_00000148 == 0) goto LAB_0614f0a4;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_0614e0b8;
LAB_0614e06c:
  do {
    if (uVar18 == 0) {
      if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_0614f13c;
      *(int *)(in_stack_00000058 + (long)(int)uVar13 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar21 = uVar13 + (int)uVar18;
      if (*(uint *)(unaff_x24 + 0x18) <= uVar21) goto LAB_0614f13c;
      *(undefined4 *)(in_stack_00000058 + (long)(int)uVar21 * 0x10 + 4) = 0x1a;
    }
    uVar18 = uVar18 + 1;
  } while ((uVar14 & 0xffffffff) != uVar18);
LAB_0614e0b0:
  uVar13 = (uVar13 + iVar9) - 1;
LAB_0614e0b8:
  if ((*unaff_x19 == 0) || (lVar22 = *(long *)(*unaff_x19 + 0x38), lVar22 == 0)) goto LAB_0614f0a4;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x4a0)) goto LAB_0614f13c;
  lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178;
  plVar23 = (long *)(lVar22 + 0x30);
  *plVar23 = lVar15;
  *(undefined4 *)(lVar22 + 0x20) = 0;
  LeanTween__value(plVar23,lVar15);
  if ((*unaff_x19 == 0) || (lVar22 = *(long *)(*unaff_x19 + 0x38), lVar22 == 0)) goto LAB_0614f0a4;
  uVar21 = *(uint *)(unaff_x26 + 0x4a0);
  if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_0614f13c;
  lVar28 = lVar22 + 0x20 + (long)(int)uVar21 * 0x178;
  *(undefined1 *)(lVar28 + 0x34) = uStack000000000000015c;
  *(short *)(lVar28 + 4) = (short)uVar10;
  if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_0614f13c;
  lVar22 = lVar22 + 0x20 + (long)(int)uVar21 * 0x178;
  uVar31 = *(undefined8 *)(in_stack_00000058 + (long)(int)uVar13 * 0x10 + 8);
  *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(unaff_x26 + 0x100);
  *(undefined8 *)(lVar22 + 8) = uVar31;
  LeanTween__value();
  if (*(char *)(lVar15 + 0x10) == '\x02') {
    plVar23 = *(long **)(lVar15 + 0x18);
    if (plVar23 == (long *)0x0) goto LAB_0614f0a4;
    bVar3 = *(byte *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                     0x130);
    if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__))
    goto LAB_0614f0a4;
    lVar15 = *unaff_x29;
    lVar22 = plVar23[0x11];
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *unaff_x29;
    }
    uVar21 = FUN_0614081c(lVar22,plVar23,*(long *)(lVar15 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
    lVar15 = *unaff_x29;
    *(uint *)(unaff_x26 + 0x120) = uVar21;
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_0614f0a4;
    if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_0614f13c;
    lVar15 = lVar15 + (long)(int)uVar21 * 0x38;
    *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
    if ((*unaff_x19 == 0) || (lVar15 = *(long *)(*unaff_x19 + 0x38), lVar15 == 0))
    goto LAB_0614f0a4;
    uVar21 = *(uint *)(unaff_x26 + 0x4a0);
    if (uVar21 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar21 * 0x178;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      *(undefined4 *)(lVar15 + 0x50) = *(undefined4 *)(unaff_x26 + 0x120);
      *(undefined4 *)(unaff_x26 + 0x65c) = 0;
      *(undefined4 *)(unaff_x26 + 0x120) = unaff_w21;
      goto LAB_0614e240;
    }
    goto LAB_0614f13c;
  }
  if (bVar7) {
    if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
    iVar8 = FUN_061524c0(*(long *)(unaff_x26 + 0x100),0);
    if (*(long *)(unaff_x26 + 0xf8) == 0) goto LAB_0614f0a4;
    iVar9 = FUN_061524c0(*(long *)(unaff_x26 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      uVar14 = FUN_0619f140(0);
      if ((uVar14 & 1) == 0) {
        if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
        uVar31 = *(undefined8 *)(*(long *)(unaff_x26 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(unaff_x26 + 0x100) == 0) goto LAB_0614f0a4;
        uVar31 = *(undefined8 *)(unaff_x26 + 0x118);
        uVar16 = *(undefined8 *)(*(long *)(unaff_x26 + 0x100) + 0x88);
        if (*(int *)(*(long *)Method_System_Globalization_HijriCalendar_CheckEraRange__ + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar31 = FUN_0619a104(uVar31,uVar16,0);
      }
      *(undefined8 *)(unaff_x26 + 0x118) = uVar31;
      LeanTween__value(unaff_x26 + 0x118);
      lVar22 = *unaff_x29;
      uVar31 = *(undefined8 *)(unaff_x26 + 0x118);
      uVar16 = *(undefined8 *)(unaff_x26 + 0x100);
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar22 = *unaff_x29;
      }
      uVar12 = FUN_061405e0(uVar31,uVar16,*(long *)(lVar22 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
      *(undefined4 *)(unaff_x26 + 0x120) = uVar12;
    }
  }
  if (*(long *)(lVar15 + 0x20) == 0) goto LAB_0614f0a4;
  iVar8 = FUN_063ed0e8(*(long *)(lVar15 + 0x20),0);
  if (0 < iVar8) {
    if (*(long *)(lVar15 + 0x20) == 0) goto LAB_0614f0a4;
    uVar31 = *(undefined8 *)(unaff_x26 + 0x100);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x118);
    uVar12 = FUN_063ed0e8(*(long *)(lVar15 + 0x20),0);
    if (*(int *)(*(long *)Method_System_Globalization_HijriCalendar_CheckEraRange__ + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Method_System_Globalization_HijriCalendar_CheckEraRange__);
    }
    uVar31 = FUN_06199b80(uVar31,uVar16,uVar12,0);
    *(undefined8 *)(unaff_x26 + 0x118) = uVar31;
    LeanTween__value(unaff_x26 + 0x118,uVar31);
    lVar15 = *unaff_x29;
    uVar31 = *(undefined8 *)(unaff_x26 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x100);
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *unaff_x29;
    }
    uVar12 = FUN_061405e0(uVar31,uVar16,*(long *)(lVar15 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
    bVar7 = true;
    *(undefined4 *)(in_stack_00000050 + 0x120) = uVar12;
    unaff_x26 = in_stack_00000050;
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar14 = FUN_05455f40(uVar10,0);
  if (((uVar14 & 1) != 0) || (uVar10 == 0x200b)) goto LAB_0614e62c;
  lVar15 = *unaff_x29;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar15 = *unaff_x29;
  }
  lVar22 = **(long **)(lVar15 + 0xb8);
  if (lVar22 == 0) goto LAB_0614f0a4;
  uVar21 = *(uint *)(unaff_x26 + 0x120);
  if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_0614f13c;
  if (*(int *)(lVar22 + (long)(int)uVar21 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      plVar23 = *(long **)(*unaff_x29 + 0xb8);
      goto LAB_0614e58c;
    }
LAB_0614e594:
    uVar21 = *(uint *)(unaff_x26 + 0x120);
    uVar27 = *(uint *)(lVar22 + 0x18);
  }
  else {
    if (bVar7) {
      if (*(long *)(unaff_x26 + 0x7b8) == 0) goto LAB_0614f0a4;
      uVar14 = FUN_04d8ddb0(*(long *)(unaff_x26 + 0x7b8),(long)(int)uVar21,
                            (long)&stack0x00000130 + 4,
                            *(undefined8 *)System_Xml_StringHandle_TypeInfo);
      if ((uVar14 & 1) == 0) {
LAB_0614e4dc:
        uVar16 = *(undefined8 *)(unaff_x26 + 0x118);
        uVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc410);
        FUN_0631f050(uVar31,uVar16,0);
        lVar15 = *unaff_x29;
        uVar16 = *(undefined8 *)(unaff_x26 + 0x100);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar15 = *unaff_x29;
        }
        uVar21 = FUN_061405e0(uVar31,uVar16,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        if (*(long *)(unaff_x26 + 0x7b8) == 0) goto LAB_0614f0a4;
        FUN_04d8c430(*(long *)(unaff_x26 + 0x7b8),*(undefined4 *)(unaff_x26 + 0x120),uVar21,
                     *(undefined8 *)PTR_DAT_06a0e8e0);
        lVar15 = *unaff_x29;
      }
      else {
        lVar15 = *unaff_x29;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar15 = *unaff_x29;
        }
        lVar22 = **(long **)(lVar15 + 0xb8);
        if (lVar22 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000130._4_4_) goto LAB_0614f13c;
        uVar21 = in_stack_00000130._4_4_;
        if (0x3ffe < *(int *)(lVar22 + (long)(int)in_stack_00000130._4_4_ * 0x38 + 0x54))
        goto LAB_0614e4dc;
      }
      *(uint *)(unaff_x26 + 0x120) = uVar21;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar15 = *unaff_x29;
      }
      plVar23 = *(long **)(lVar15 + 0xb8);
LAB_0614e58c:
      lVar22 = *plVar23;
      if (lVar22 == 0) goto LAB_0614f0a4;
      goto LAB_0614e594;
    }
    uVar16 = *(undefined8 *)(unaff_x26 + 0x118);
    uVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc410);
    FUN_0631f050(uVar31,uVar16,0);
    lVar15 = *unaff_x29;
    uVar16 = *(undefined8 *)(unaff_x26 + 0x100);
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *unaff_x29;
    }
    uVar21 = FUN_061405e0(uVar31,uVar16,*(long *)(lVar15 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
    lVar15 = *unaff_x29;
    *(uint *)(unaff_x26 + 0x120) = uVar21;
    lVar22 = **(long **)(lVar15 + 0xb8);
    if (lVar22 == 0) goto LAB_0614f0a4;
    uVar27 = *(uint *)(lVar22 + 0x18);
  }
  if (uVar27 <= uVar21) goto LAB_0614f13c;
  lVar22 = lVar22 + (long)(int)uVar21 * 0x38;
  *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
LAB_0614e62c:
  if ((*unaff_x19 != 0) && (lVar15 = *(long *)(*unaff_x19 + 0x38), lVar15 != 0)) {
    if (*(uint *)(unaff_x26 + 0x4a0) < *(uint *)(lVar15 + 0x18)) {
      *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178 + 0x48) =
           *(undefined8 *)(unaff_x26 + 0x118);
      LeanTween__value();
      if ((*unaff_x19 != 0) && (lVar15 = *(long *)(*unaff_x19 + 0x38), lVar15 != 0)) {
        if (*(uint *)(unaff_x26 + 0x4a0) < *(uint *)(lVar15 + 0x18)) {
          *(undefined4 *)(lVar15 + (long)(int)*(uint *)(unaff_x26 + 0x4a0) * 0x178 + 0x50) =
               *(undefined4 *)(unaff_x26 + 0x120);
          lVar15 = *unaff_x29;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar15 = *unaff_x29;
          }
          lVar22 = **(long **)(lVar15 + 0xb8);
          if (lVar22 == 0) goto LAB_0614f0a4;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x120)) goto LAB_0614f13c;
          *(bool *)(lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x120) * 0x38 + 0x41) = bVar7;
          if (bVar7) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar22 = **(long **)(*unaff_x29 + 0xb8);
              if (lVar22 == 0) goto LAB_0614f0a4;
            }
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x26 + 0x120)) goto LAB_0614f13c;
            puVar17 = (undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x26 + 0x120) * 0x38 + 0x48)
            ;
            *puVar17 = in_stack_00000028;
            LeanTween__value(puVar17,in_stack_00000028);
            *(undefined8 *)(unaff_x26 + 0x100) = in_stack_00000020;
            LeanTween__value(unaff_x26 + 0x100);
            *(undefined8 *)(unaff_x26 + 0x118) = in_stack_00000028;
            LeanTween__value(unaff_x26 + 0x118,in_stack_00000028);
            *(undefined4 *)(unaff_x26 + 0x120) = unaff_w21;
          }
          uVar21 = *(uint *)(unaff_x26 + 0x4a0);
          do {
            *(uint *)(unaff_x26 + 0x4a0) = uVar21 + 1;
            do {
              uVar21 = *(uint *)(unaff_x24 + 0x18);
              unaff_w25 = uVar13 + 1;
              if ((int)uVar21 <= (int)unaff_w25) goto LAB_0614e75c;
              if (uVar21 <= unaff_w25) goto LAB_0614f13c;
              unaff_x27 = (uint *)(in_stack_00000058 + (long)(int)unaff_w25 * 0x10 + 4);
              if (*unaff_x27 == 0) goto LAB_0614e75c;
              if (*unaff_x19 == 0) goto LAB_0614f0a4;
              plVar23 = (long *)(*unaff_x19 + 0x38);
              lVar15 = *plVar23;
              iVar8 = *(int *)(unaff_x26 + 0x4a0);
              if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) <= iVar8)) {
                if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                FUN_0383ee04(plVar23,iVar8 + 1,1,
                             *(undefined8 *)
                              Method_System_Globalization_HijriCalendar_CheckTicksRange__);
                uVar21 = *(uint *)(unaff_x24 + 0x18);
              }
              if (uVar21 <= unaff_w25) goto LAB_0614f13c;
              unaff_x23 = (long)(int)unaff_w25;
              param_3 = *unaff_x27;
              unaff_w21 = *(undefined4 *)(unaff_x26 + 0x120);
              if ((*(char *)(unaff_x26 + 0x33a) == '\0') || (param_3 != 0x3c)) {
LAB_0614d444:
                in_stack_00000020 = *(undefined8 *)(unaff_x26 + 0x100);
                in_stack_00000028 = *(undefined8 *)(unaff_x26 + 0x118);
                uStack000000000000015c = 0;
                uVar13 = unaff_w25;
                if (*(int *)(unaff_x26 + 0x65c) != 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_hoverExited;
                uVar21 = *(uint *)(unaff_x26 + 0x284);
                if ((uVar21 >> 4 & 1) == 0) {
                  if ((uVar21 >> 3 & 1) != 0) {
                    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar14 = FUN_0545850c(param_3,0);
                    if ((uVar14 & 1) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_hoverExited
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    param_3 = FUN_054589ac(param_3,0);
                    goto code_r0x0614d514;
                  }
                  if ((uVar21 >> 5 & 1) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_hoverExited;
                }
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar14 = FUN_054585ac(param_3,0);
                if ((uVar14 & 1) == 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_hoverExited;
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                param_3 = FUN_05458834(param_3,0);
                goto code_r0x0614d514;
              }
              uVar14 = FUN_0617e944(unaff_x26);
              uVar13 = uStack0000000000000158;
              if ((uVar14 & 1) == 0) {
                unaff_w21 = *(undefined4 *)(unaff_x26 + 0x120);
                goto LAB_0614d444;
              }
              if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) goto LAB_0614f13c;
              iVar8 = *(int *)(in_stack_00000058 + unaff_x23 * 0x10 + 8);
              if ((*(byte *)(unaff_x26 + 0x284) & 1) != 0) {
                *(undefined1 *)(unaff_x26 + 0x292) = 1;
              }
              piVar1 = (int *)(unaff_x26 + 0x65c);
              unaff_x26 = in_stack_00000050;
            } while (*piVar1 != 1);
            lVar15 = *unaff_x29;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar15 = *unaff_x29;
            }
            lVar15 = **(long **)(lVar15 + 0xb8);
            if (lVar15 == 0) goto LAB_0614f0a4;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(in_stack_00000050 + 0x120)) break;
            lVar15 = lVar15 + (long)(int)*(uint *)(in_stack_00000050 + 0x120) * 0x38;
            *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
            if ((*unaff_x19 == 0) || (lVar15 = *(long *)(*unaff_x19 + 0x38), lVar15 == 0))
            goto LAB_0614f0a4;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(in_stack_00000050 + 0x4a0)) break;
            lVar15 = lVar15 + (long)(int)*(uint *)(in_stack_00000050 + 0x4a0) * 0x178;
            sVar4 = *(short *)(in_stack_00000050 + 0x6bc);
            *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(in_stack_00000050 + 0x100);
            *(short *)(lVar15 + 0x24) = sVar4 + -0x2000;
            LeanTween__value();
            if ((*(long *)(in_stack_00000050 + 0x3a0) == 0) ||
               (lVar15 = *(long *)(*(long *)(in_stack_00000050 + 0x3a0) + 0x38), lVar15 == 0))
            goto LAB_0614f0a4;
            uVar21 = *(uint *)(in_stack_00000050 + 0x4a0);
            if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
            *(undefined4 *)(lVar15 + 0x20 + (long)(int)uVar21 * 0x178 + 0x30) =
                 *(undefined4 *)(in_stack_00000050 + 0x120);
            if ((*(long *)(in_stack_00000050 + 0x6b0) == 0) ||
               (lVar22 = FUN_061a2bf0(*(long *)(in_stack_00000050 + 0x6b0),0), lVar22 == 0))
            goto LAB_0614f0a4;
            uVar31 = FUN_0400ff1c(lVar22,*(undefined4 *)(in_stack_00000050 + 0x6bc),
                                  *(undefined8 *)
                                   Method_Unity_Hierarchy_HierarchyViewModel_HasAllFlags__);
            if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
            *(undefined8 *)(lVar15 + 0x20 + (long)(int)uVar21 * 0x178 + 0x10) = uVar31;
            LeanTween__value();
            if ((*in_stack_00000048 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000048 + 0x38), lVar15 == 0)) goto LAB_0614f0a4;
            uVar21 = *(uint *)(in_stack_00000050 + 0x4a0);
            if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
            puVar26 = (undefined4 *)(lVar15 + 0x20 + (long)(int)uVar21 * 0x178);
            *puVar26 = *(undefined4 *)(in_stack_00000050 + 0x65c);
            puVar26[2] = iVar8;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar13) break;
            *(int *)(lVar15 + 0x20 + (long)(int)uVar21 * 0x178 + 0xc) =
                 (*(int *)(in_stack_00000058 + (long)(int)uVar13 * 0x10 + 8) - iVar8) + 1;
            *(undefined4 *)(in_stack_00000050 + 0x65c) = 0;
            *(undefined4 *)(in_stack_00000050 + 0x120) = unaff_w21;
            unaff_x19 = in_stack_00000048;
LAB_0614e240:
            in_stack_00000040 = in_stack_00000040 + 1;
          } while( true );
        }
        goto LAB_0614f13c;
      }
      goto LAB_0614f0a4;
    }
    goto LAB_0614f13c;
  }
  goto LAB_0614f0a4;
LAB_0614e924:
  do {
    fVar35 = (float)param_2;
    if (uVar18 != 0) {
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_0614f0a4;
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
      uVar31 = *(undefined8 *)(lVar24 + uVar18 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar19 = FUN_06350670(uVar31,0,0);
      if ((uVar19 & 1) != 0) {
        lVar24 = *unaff_x29;
        plVar23 = (long *)*plVar29;
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar24 = *unaff_x29;
        }
        lVar24 = **(long **)(lVar24 + 0xb8);
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = lVar24 + lVar22;
        in_stack_000000e0 = *(undefined8 *)(lVar24 + -4);
        in_stack_000000d8 = *(undefined8 *)(lVar24 + -0xc);
        in_stack_000000d0 = *(undefined8 *)(lVar24 + -0x14);
        in_stack_000000b8 = *(undefined8 *)(lVar24 + -0x2c);
        uVar31 = *(undefined8 *)(lVar24 + -0x34);
        in_stack_000000c8 = *(undefined8 *)(lVar24 + -0x1c);
        in_stack_000000c0 = *(undefined8 *)(lVar24 + -0x24);
        in_stack_000000b0 = uVar31;
        lVar24 = FUN_061a6dec(in_stack_00000050,&stack0x000000b0,0);
        fVar35 = (float)uVar31;
        if (plVar23 == (long *)0x0) goto LAB_0614f0a4;
        if ((lVar24 != 0) &&
           (lVar20 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)) {
LAB_0614f140:
          uVar31 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar31,0);
        }
        if (*(uint *)(plVar23 + 3) <= uVar18) goto LAB_0614f13c;
        plVar23[uVar18 + 4] = lVar24;
        LeanTween__value((long)plVar23 + lVar28,lVar24);
        if ((*in_stack_00000048 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000048 + 0x60), lVar24 == 0)) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        puVar17 = (undefined8 *)(lVar24 + lVar15 + 0x30);
        *puVar17 = 0;
        LeanTween__value(puVar17,0);
      }
      if (*(long *)(in_stack_00000050 + 0x3b8) == 0) goto LAB_0614f0a4;
      fVar32 = (float)FUN_0635cd98(*(long *)(in_stack_00000050 + 0x3b8),0);
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_0614f0a4;
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
      lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
      if ((lVar24 == 0) || (fVar34 = fVar35, lVar24 = FUN_0644077c(lVar24,0), lVar24 == 0))
      goto LAB_0614f0a4;
      fVar33 = (float)FUN_0635cd98(lVar24,0);
      fVar35 = (fVar35 - fVar34) * (fVar35 - fVar34);
      param_2 = (ulong)(uint)fVar35;
      if (fVar5 <= (fVar32 - fVar33) * (fVar32 - fVar33) + fVar35) {
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0614f0a4;
        lVar24 = FUN_0644077c(lVar24,0);
        if ((*(long *)(in_stack_00000050 + 0x3b8) == 0) ||
           (FUN_0635cd98(*(long *)(in_stack_00000050 + 0x3b8),0), lVar24 == 0)) goto LAB_0614f0a4;
        FUN_0635ce5c(lVar24,0);
      }
      lVar24 = *plVar29;
      if (lVar24 == 0) goto LAB_0614f0a4;
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
      lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
      if (lVar24 == 0) goto LAB_0614f0a4;
      uVar31 = *(undefined8 *)(lVar24 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar19 = FUN_06350670(uVar31,0,0);
      if ((uVar19 & 1) == 0) {
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0xf0), lVar24 == 0)) goto LAB_0614f0a4;
        iVar8 = FUN_063540b8(lVar24,0);
        lVar24 = *unaff_x29;
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar24);
          lVar24 = *unaff_x29;
        }
        lVar24 = **(long **)(lVar24 + 0xb8);
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + lVar22 + -0x1c);
        if (lVar24 == 0) goto LAB_0614f0a4;
        iVar9 = FUN_063540b8(lVar24,0);
        if (iVar8 != iVar9) goto LAB_0614ebd0;
      }
      else {
LAB_0614ebd0:
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar20 = *unaff_x29;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar20 = *unaff_x29;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        if (lVar24 == 0) goto LAB_0614f0a4;
        thunk_FUN_061a6a4c(lVar24,*(undefined8 *)(lVar20 + lVar22 + -0x1c),0);
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar20 = **(long **)(*unaff_x29 + 0xb8);
        if (lVar20 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0614f0a4;
        *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar20 + lVar22 + -0x2c);
        LeanTween__value();
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar20 = **(long **)(*unaff_x29 + 0xb8);
        if (lVar20 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0614f0a4;
        *(undefined8 *)(lVar24 + 0xe0) = *(undefined8 *)(lVar20 + lVar22 + -0x24);
        LeanTween__value();
      }
      lVar24 = *unaff_x29;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar24 = *unaff_x29;
      }
      lVar20 = **(long **)(lVar24 + 0xb8);
      if (lVar20 == 0) goto LAB_0614f0a4;
      if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
      if (*(char *)(lVar20 + lVar22 + -0x13) != '\0') {
        lVar25 = *plVar29;
        if (lVar25 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar25 = *(long *)(lVar25 + uVar18 * 8 + 0x20);
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar20 = **(long **)(*unaff_x29 + 0xb8);
          if (lVar20 == 0) goto LAB_0614f0a4;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        if (lVar25 == 0) goto LAB_0614f0a4;
        FUN_061a6aa8(lVar25,*(undefined8 *)(lVar20 + lVar22 + -0x1c),0);
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar20 = **(long **)(*unaff_x29 + 0xb8);
        if (lVar20 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0614f0a4;
        *(undefined8 *)(lVar24 + 0x100) = *(undefined8 *)(lVar20 + lVar22 + -0xc);
        LeanTween__value(lVar24 + 0x100);
      }
    }
    lVar24 = *unaff_x29;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar24 = *unaff_x29;
    }
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 == 0) goto LAB_0614f0a4;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
    if ((*in_stack_00000048 == 0) || (lVar20 = *(long *)(*in_stack_00000048 + 0x60), lVar20 == 0))
    goto LAB_0614f0a4;
    if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
    lVar25 = lVar20 + lVar15;
    uVar21 = *(uint *)(lVar24 + lVar22);
    if (*(long *)(lVar25 + 0x30) == 0) {
      if (uVar18 == 0) {
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        FUN_0619ac38(&stack0x00000060,*(undefined8 *)(in_stack_00000050 + 0x3d8),uVar21 + 1,0);
        if (*(int *)(lVar20 + 0x18) == 0) goto LAB_0614f13c;
      }
      else {
        lVar24 = *plVar29;
        if (lVar24 == 0) goto LAB_0614f0a4;
        if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0614f0a4;
        uVar31 = FUN_061a6c84(lVar24,0);
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        FUN_0619ac38(&stack0x00000060,uVar31,uVar21 + 1,0);
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_0614f13c;
        lVar20 = lVar20 + lVar15;
      }
      memmove((void *)(lVar20 + 0x20),&stack0x00000060,0x50);
      LeanTween__value(lVar25 + 0x20,0);
    }
    else {
      iVar8 = *(int *)(*(long *)(lVar25 + 0x30) + 0x18);
      if (iVar8 < (int)(uVar21 * 4)) {
        if ((int)uVar21 < 0x401) {
          uVar21 = uVar21 | (int)uVar21 >> 0x10;
          uVar21 = uVar21 | (int)uVar21 >> 8;
          uVar21 = uVar21 | (int)uVar21 >> 4;
          uVar21 = uVar21 | (int)uVar21 >> 2;
          uVar21 = uVar21 | (int)uVar21 >> 1;
LAB_0614eef0:
          iVar8 = uVar21 + 1;
        }
        else {
LAB_0614ee1c:
          iVar8 = uVar21 + 0x100;
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0619ba14(lVar25 + 0x20,iVar8,0);
      }
      else if ((*(char *)(in_stack_00000050 + 0x359) != '\0') && (0 < (int)uVar21)) {
        iVar9 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar9 = iVar8;
        }
        if (0x100 < (int)((iVar9 >> 2) - uVar21)) {
          if (uVar21 < 0x401) {
            uVar21 = uVar21 >> 4 | uVar21 >> 8 | uVar21;
            uVar21 = uVar21 | uVar21 >> 2;
            uVar21 = uVar21 | uVar21 >> 1;
            goto LAB_0614eef0;
          }
          goto LAB_0614ee1c;
        }
      }
    }
    unaff_x29 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
    if ((*in_stack_00000048 == 0) || (lVar24 = *(long *)(*in_stack_00000048 + 0x60), lVar24 == 0))
    goto LAB_0614f0a4;
    lVar20 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar20 = *unaff_x29;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_0614f0a4;
    if ((*(uint *)(lVar20 + 0x18) <= uVar18) || (*(uint *)(lVar24 + 0x18) <= uVar18))
    goto LAB_0614f13c;
    *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar20 + lVar22 + -0x1c);
    LeanTween__value();
    uVar18 = uVar18 + 1;
    lVar15 = lVar15 + 0x50;
    lVar22 = lVar22 + 0x38;
    lVar28 = lVar28 + 8;
  } while (uVar14 != uVar18);
LAB_0614efe4:
  lVar15 = *plVar29;
  if (lVar15 != 0) {
    lVar22 = (long)(int)uVar13 + 4;
    do {
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0x18);
      if ((long)(int)uVar13 <= lVar22 + -4) {
LAB_0614e768:
        return *(undefined4 *)(in_stack_00000050 + 0x4a0);
      }
      uVar21 = (uint)uVar14;
      if (uVar13 <= uVar21) {
LAB_0614f13c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar31 = *(undefined8 *)(lVar15 + lVar22 * 8);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar14 = FUN_0634eb94(uVar31,0,0);
      if ((uVar14 & 1) == 0) goto LAB_0614e768;
      if ((*in_stack_00000048 == 0) || (lVar15 = *(long *)(*in_stack_00000048 + 0x60), lVar15 == 0))
      break;
      if (lVar22 + -4 < (long)*(int *)(lVar15 + 0x18)) {
        lVar15 = *plVar29;
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_0614f13c;
        lVar15 = *(long *)(lVar15 + lVar22 * 8);
        if ((lVar15 == 0) || (lVar15 = FUN_0644105c(lVar15,0), lVar15 == 0)) break;
        FUN_0660620c(lVar15,0,0);
      }
      lVar15 = *plVar29;
      lVar22 = lVar22 + 1;
      uVar14 = (ulong)(uVar21 + 1);
    } while (lVar15 != 0);
  }
LAB_0614f0a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


