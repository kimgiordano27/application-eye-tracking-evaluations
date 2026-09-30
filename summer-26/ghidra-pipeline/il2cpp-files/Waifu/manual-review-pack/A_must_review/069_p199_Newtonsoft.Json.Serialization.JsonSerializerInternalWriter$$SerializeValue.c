/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 0685f8c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
               (long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long unaff_x19;
  uint unaff_w20;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined8 uVar22;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long lVar23;
  long *in_stack_00000008;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  
code_r0x0685f8c8:
  uVar9 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2c0));
  if ((uVar9 & 1) == 0) {
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
    plVar10 = *(long **)(unaff_x26 + unaff_x19);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar10 + 0x588))(plVar10,*(undefined8 *)(*plVar10 + 0x590));
                    /* try { // try from 0685f900 to 0695f90b has its CatchHandler @ 068601c4 */
    if ((uVar9 & 1) == 0) goto LAB_0685f94c;
    lVar16 = *unaff_x28;
    if (lVar16 == 0) goto LAB_0685eebc;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
                    /* try { // try from 0685f928 to 0695f99b has its CatchHandler @ 068601c0 */
    uVar9 = (**(code **)(*in_stack_00000040 + 0x908))
                      (in_stack_00000040,*(undefined8 *)(lVar16 + unaff_x19),
                       *(undefined8 *)(*in_stack_00000040 + 0x910));
    if ((uVar9 & 1) == 0) goto LAB_0685f94c;
  }
LAB_0685f934:
  lVar16 = *unaff_x28;
  unaff_w20 = unaff_w20 + 1;
  unaff_x19 = unaff_x19 + 8;
  if (lVar16 != 0) {
LAB_0685f7dc:
    if ((int)unaff_w20 < *(int *)(lVar16 + 0x18)) {
      uVar9 = (**(code **)(*in_stack_00000040 + 0x608))
                        (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x610));
      if (unaff_x26 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
      lVar16 = *(long *)(unaff_x26 + unaff_x19);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((uVar9 & 1) == 0) {
        unaff_x22 = &DAT_083d2000;
        if (lVar16 != 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
          param_2 = *(undefined8 *)(unaff_x26 + unaff_x19);
          param_1 = in_stack_00000040;
          goto code_r0x0685f8c8;
        }
        goto LAB_0685f934;
      }
      if (lVar16 == 0) {
        unaff_x22 = &DAT_083d2000;
      }
      else {
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
        uVar21 = *(undefined8 *)(lVar16 + unaff_x19);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*in_stack_00000040 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*in_stack_00000040 + 200) +
                      (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(in_stack_00000040);
        }
        uVar9 = FUN_06861228(uVar21,in_stack_00000040);
        unaff_x22 = &DAT_083d2000;
        if ((uVar9 & 1) != 0) goto LAB_0685f934;
      }
    }
LAB_0685f94c:
    if (*unaff_x28 != 0) {
      uVar9 = unaff_x25;
      if (unaff_w20 == *(uint *)(*unaff_x28 + 0x18)) {
        if (unaff_x23 == 0) goto LAB_0685eebc;
        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)
           ) goto LAB_0685fd5c;
        lVar16 = (long)(int)unaff_w24;
        puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar16 * 8);
        *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
                    /* try { // try from 0685f9f0 to 0695f9f3 has its CatchHandler @ 06860190 */
        if ((in_stack_00000040 != (long *)0x0) &&
           (lVar11 = FUN_0339898c(in_stack_00000040,*(undefined8 *)(*in_stack_00000020 + 0x40)),
           lVar11 == 0)) goto LAB_06860ed8;
        if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
        plVar10 = in_stack_00000020 + lVar16 + 4;
        *plVar10 = (long)in_stack_00000040;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
          do {
                    /* try { // try from 0685fa4c to 0695fa5f has its CatchHandler @ 068601e0 */
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar7 = *(uint *)(unaff_x27 + 3);
        if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
        lVar11 = *in_stack_00000018;
        if (lVar11 != 0) {
                    /* try { // try from 0685fa78 to 0695fa8b has its CatchHandler @ 068601f0 */
          lVar12 = FUN_0339898c(lVar11,*(undefined8 *)(*unaff_x27 + 0x40));
          if (lVar12 == 0) goto LAB_06860ed8;
          uVar7 = (uint)unaff_x27[3];
        }
        if (uVar7 <= unaff_w24) goto LAB_0685fd5c;
        plVar10 = unaff_x27 + lVar16 + 4;
        *plVar10 = lVar11;
        unaff_w24 = unaff_w24 + 1;
        if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        unaff_x22 = &DAT_083d2000;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
LAB_0685fbc4:
      uVar7 = *(uint *)(unaff_x27 + 3);
      uVar17 = (ulong)uVar7;
      unaff_x25 = uVar9 + 1;
      if ((long)unaff_x25 < (long)(int)uVar7) {
        if (uVar17 <= unaff_x25) goto LAB_0685fd5c;
        in_stack_00000018 = unaff_x27 + uVar9 + 5;
        uVar17 = FUN_06740938(*in_stack_00000018,0,0);
        uVar9 = unaff_x25;
        if ((uVar17 & 1) == 0) {
          if (*(uint *)(unaff_x27 + 3) <= unaff_x25) goto LAB_0685fd5c;
          plVar10 = (long *)*in_stack_00000018;
          if ((plVar10 == (long *)0x0) ||
             (lVar16 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
             lVar16 == 0)) goto LAB_0685eebc;
          uVar17 = *(ulong *)(lVar16 + 0x18);
          lVar11 = *unaff_x28;
          if (uVar17 == 0) {
            if (lVar11 == 0) goto LAB_0685eebc;
            if (*(long *)(lVar11 + 0x18) != 0) {
              if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
              plVar10 = (long *)*in_stack_00000018;
              if (plVar10 == (long *)0x0) goto LAB_0685eebc;
              uVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
              unaff_x27 = in_stack_00000028;
              if ((uVar7 >> 1 & 1) == 0) goto LAB_0685fbc4;
            }
            if (unaff_x23 == 0) goto LAB_0685eebc;
            if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
               (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)) goto LAB_0685fd5c;
            puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)unaff_w24 * 8);
            *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uVar7 = *(uint *)(in_stack_00000028 + 3);
            if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
            lVar16 = *in_stack_00000018;
            if (lVar16 != 0) {
              lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*in_stack_00000028 + 0x40));
              if (lVar11 == 0) goto LAB_06860ed8;
              uVar7 = (uint)in_stack_00000028[3];
            }
            if (uVar7 <= unaff_w24) goto LAB_0685fd5c;
            plVar10 = in_stack_00000028 + (long)(int)unaff_w24 + 4;
            *plVar10 = lVar16;
            unaff_w24 = unaff_w24 + 1;
            unaff_x27 = in_stack_00000028;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
              unaff_x22 = &DAT_083d2000;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_0685fbc4;
            }
          }
          else {
            if (lVar11 == 0) goto LAB_0685eebc;
            uVar7 = *(uint *)(lVar11 + 0x18);
            iVar6 = (int)uVar17;
            if (iVar6 <= (int)uVar7) {
              if (iVar6 == 0) goto LAB_0685fd5c;
              uVar8 = iVar6 - 1;
              lVar11 = (long)(int)uVar8;
              plVar10 = (long *)(lVar16 + lVar11 * 8 + 0x20);
              plVar18 = (long *)*plVar10;
              if ((plVar18 == (long *)0x0) ||
                 (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                              (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
                 plVar18 == (long *)0x0)) goto LAB_0685eebc;
              uVar17 = (**(code **)(*plVar18 + 0x358))(plVar18,*(undefined8 *)(*plVar18 + 0x360));
              uVar21 = DAT_083bd0a8;
              if (iVar6 < (int)uVar7) {
                if ((uVar17 & 1) != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
                  plVar18 = (long *)*plVar10;
                  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  uVar21 = FUN_0683eca4(uVar21,0);
                  if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                  uVar17 = (**(code **)(*plVar18 + 0x218))
                                     (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220));
                  unaff_x27 = in_stack_00000028;
                  if ((uVar17 & 1) == 0) goto LAB_0685fbb8;
                  if (unaff_x23 == 0) goto LAB_0685eebc;
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar12 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                  if (lVar12 == 0) goto LAB_0685eebc;
                  if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
                  if (*(uint *)(lVar12 + lVar11 * 4 + 0x20) == uVar8) goto LAB_0685f2d4;
                }
LAB_0685fbc0:
                unaff_x22 = &DAT_083d2000;
                unaff_x27 = in_stack_00000028;
                goto LAB_0685fbc4;
              }
              if ((uVar17 & 1) != 0) {
                if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
                plVar18 = (long *)*plVar10;
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar21 = FUN_0683eca4(uVar21,0);
                if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                uVar9 = (**(code **)(*plVar18 + 0x218))
                                  (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220));
                if ((uVar9 & 1) == 0) {
                  in_stack_00000040 = (long *)0x0;
                  goto LAB_0685f360;
                }
                if (unaff_x23 == 0) goto LAB_0685eebc;
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar12 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_0685eebc;
                if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
                if (*(uint *)(lVar12 + lVar11 * 4 + 0x20) == uVar8) {
                  if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
                  plVar18 = (long *)*plVar10;
                  if ((plVar18 == (long *)0x0) ||
                     (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                                  (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
                     unaff_x26 == 0)) goto LAB_0685eebc;
                  if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_0685fd5c;
                  if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                  uVar9 = (**(code **)(*plVar18 + 0x2b8))
                                    (plVar18,*(undefined8 *)(unaff_x26 + lVar11 * 8 + 0x20),
                                     *(undefined8 *)(*plVar18 + 0x2c0));
                  if ((uVar9 & 1) == 0) goto LAB_0685f2d4;
                }
              }
LAB_0685f35c:
              in_stack_00000040 = (long *)0x0;
              goto LAB_0685f360;
            }
            uVar8 = iVar6 - 1;
            if ((int)uVar7 < (int)uVar8) {
              plVar10 = (long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
              do {
                if ((uint)uVar17 <= uVar7) goto LAB_0685fd5c;
                plVar18 = (long *)*plVar10;
                if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                lVar11 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
                if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083ca050);
                }
                if (lVar11 == **(long **)(DAT_083ca050 + 0xb8)) {
                  uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
                  uVar8 = *(uint *)(lVar16 + 0x18) - 1;
                  break;
                }
                uVar17 = *(ulong *)(lVar16 + 0x18);
                uVar7 = uVar7 + 1;
                plVar10 = plVar10 + 1;
                uVar8 = (int)uVar17 - 1;
              } while ((int)uVar7 < (int)uVar8);
            }
            unaff_x27 = in_stack_00000028;
            if (uVar7 == uVar8) {
              if ((uint)uVar17 <= uVar8) goto LAB_0685fd5c;
              plVar10 = (long *)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
              plVar18 = (long *)*plVar10;
              if (plVar18 == (long *)0x0) goto LAB_0685eebc;
              lVar11 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
              if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
                FUN_033b9870(DAT_083ca050);
              }
              if (lVar11 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
              if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
              plVar18 = (long *)*plVar10;
              if ((plVar18 == (long *)0x0) ||
                 (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                              (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
                 plVar18 == (long *)0x0)) goto LAB_0685eebc;
              uVar17 = (**(code **)(*plVar18 + 0x358))(plVar18,*(undefined8 *)(*plVar18 + 0x360));
              uVar21 = DAT_083bd0a8;
                    /* try { // try from 0685fb18 to 0695fb1b has its CatchHandler @ 068601a0 */
              if ((uVar17 & 1) == 0) goto LAB_0685fbc0;
              if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
              plVar18 = (long *)*plVar10;
                    /* try { // try from 0685fb38 to 0695fbab has its CatchHandler @ 0686019c */
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar21 = FUN_0683eca4(uVar21,0);
              if (plVar18 == (long *)0x0) goto LAB_0685eebc;
              uVar9 = (**(code **)(*plVar18 + 0x218))
                                (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220));
              if ((uVar9 & 1) != 0) {
                if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
                plVar10 = (long *)*plVar10;
                goto joined_r0x0685f2e4;
              }
            }
          }
LAB_0685fbb8:
          unaff_x22 = &DAT_083d2000;
          uVar9 = unaff_x25;
        }
        goto LAB_0685fbc4;
      }
      if (unaff_w24 != 1) {
                    /* try { // try from 0685fc00 to 0695fc03 has its CatchHandler @ 0686017c */
        if (unaff_w24 == 0) {
          uVar22 = FUN_033d1ba8(&DAT_08440468);
          FUN_033d1ba8(&DAT_083cee70);
          uVar21 = thunk_FUN_03398a84();
          FUN_0683135c(uVar21,uVar22,0);
          goto LAB_06860fa0;
        }
        if ((int)unaff_w24 < 2) {
          uVar7 = 0;
          in_stack_00000028 = unaff_x27;
          in_stack_00000048 = unaff_x28;
          goto LAB_0685fdf8;
        }
        if (uVar7 == 0) goto LAB_0685fd5c;
        if (unaff_x23 == 0) goto LAB_0685eebc;
        lVar16 = 0;
        uVar7 = 0;
        uVar9 = (ulong)unaff_w24;
        uVar20 = 1;
        bVar5 = false;
        goto LAB_0685fc30;
      }
      if (in_stack_00000030 == 0) goto LAB_0685ff98;
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
                    /* try { // try from 0685fd78 to 0695fd7f has its CatchHandler @ 06860168 */
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
      lVar16 = FUN_03398738();
      lVar11 = *unaff_x28;
      if ((lVar11 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar12 = in_stack_00000020[4];
                    /* try { // try from 0685fda4 to 0695fdaf has its CatchHandler @ 0686018c */
      if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar23 = FUN_03398a84(DAT_083d57e0);
      uVar21 = DAT_083c7838;
      if (lVar16 == 0) {
        lVar13 = 0;
      }
      else {
                    /* try { // try from 0685fdcc to 0695fdd3 has its CatchHandler @ 06860184 */
        lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
        if (lVar13 == 0) goto LAB_0685fe90;
      }
      uVar3 = *(undefined4 *)(lVar11 + 0x18);
      plVar10 = (long *)(lVar23 + 0x10);
      *plVar10 = lVar13;
                    /* try { // try from 0685fec8 to 0695fecb has its CatchHandler @ 068601b4 */
      if (DAT_08908cd0 == 0) {
        *(undefined4 *)(lVar23 + 0x18) = uVar3;
        *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
        *in_stack_00000008 = lVar23;
      }
      else {
                    /* try { // try from 0685feec to 0695ff03 has its CatchHandler @ 068601b0 */
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined4 *)(lVar23 + 0x18) = uVar3;
        *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
                    /* try { // try from 0685ff18 to 0695ff2b has its CatchHandler @ 068601ac */
        *in_stack_00000008 = lVar23;
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
      uVar21 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar16 = *unaff_x28;
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_068613a0(uVar21,lVar16);
      uVar7 = (uint)unaff_x27[3];
      unaff_x22 = &DAT_083d2000;
LAB_0685ff98:
      if (uVar7 == 0) goto LAB_0685fd5c;
      plVar18 = unaff_x27 + 4;
      plVar10 = (long *)*plVar18;
      if (((plVar10 == (long *)0x0) ||
          (lVar16 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
          lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
      iVar6 = *(int *)(*unaff_x28 + 0x18);
      iVar15 = (int)*(ulong *)(lVar16 + 0x18);
      if (iVar15 == iVar6) {
        if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar11 = in_stack_00000020[4];
        if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (lVar11 != 0) {
          plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
          uVar7 = *(int *)(lVar16 + 0x18) - 1;
          FUN_068537e0(*unaff_x28,0,plVar10,0,uVar7,0);
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar11 = in_stack_00000020[4];
          lVar16 = FUN_03398188(DAT_083c7838,1);
          if (lVar16 == 0) goto LAB_0685eebc;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
          *(undefined4 *)(lVar16 + 0x20) = 1;
          lVar16 = FUN_06852fd0(lVar11);
          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
          if ((lVar16 != 0) &&
             (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          uVar8 = *(uint *)(plVar10 + 3);
          if (uVar8 <= uVar7) goto LAB_0685fd5c;
          plVar14 = plVar10 + (long)(int)uVar7 + 4;
          *plVar14 = lVar16;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uVar8 = *(uint *)(plVar10 + 3);
          }
          if (uVar8 <= uVar7) goto LAB_0685fd5c;
          lVar16 = *unaff_x28;
          if (lVar16 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0685fd5c;
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_0685eebc;
          if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
              != DAT_083c8a28)) goto LAB_06860fdc;
          FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar7 * 8 + 0x20),0,0);
          *unaff_x28 = (long)plVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
LAB_06860db0:
        if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
        goto LAB_06860eb4;
      }
      if (iVar15 <= iVar6) {
        if ((int)unaff_x27[3] == 0) goto LAB_0685fd5c;
        plVar10 = (long *)*plVar18;
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        uVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
        if ((uVar7 >> 1 & 1) == 0) {
          plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
          uVar7 = *(int *)(lVar16 + 0x18) - 1;
          FUN_068537e0(*unaff_x28,0,plVar10,0,uVar7,0);
          if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar11 = in_stack_00000020[4];
          lVar16 = FUN_03398188(DAT_083c7838,1);
          if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_0685eebc;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
          *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
          lVar16 = FUN_06852fd0(lVar11);
          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
          if ((lVar16 != 0) &&
             (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          uVar8 = *(uint *)(plVar10 + 3);
          if (uVar8 <= uVar7) goto LAB_0685fd5c;
          plVar14 = plVar10 + (long)(int)uVar7 + 4;
          *plVar14 = lVar16;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uVar8 = *(uint *)(plVar10 + 3);
          }
          if (uVar8 <= uVar7) goto LAB_0685fd5c;
          lVar16 = *unaff_x28;
          if (lVar16 == 0) goto LAB_0685eebc;
          plVar14 = (long *)*plVar14;
          if (plVar14 != (long *)0x0) {
            if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 +
                         -8) != DAT_083c8a28)) goto LAB_06860fdc;
          }
          FUN_068537e0(lVar16,uVar7,plVar14,0,*(int *)(lVar16 + 0x18) - uVar7,0);
          *unaff_x28 = (long)plVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        goto LAB_06860db0;
      }
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff);
      lVar11 = *unaff_x28;
      if (lVar11 == 0) goto LAB_0685eebc;
      uVar9 = 0;
      while( true ) {
        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar16 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              uVar8 = (uint)uVar9;
              if (uVar7 <= uVar8) goto LAB_0685fd5c;
              plVar14 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
              if ((plVar14 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar14 + 0x208))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                 plVar10 == (long *)0x0)) goto LAB_0685eebc;
              if ((lVar11 != 0) &&
                 (lVar12 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
              goto LAB_06860ed8;
              if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_0685fd5c;
              plVar14 = plVar10 + (long)(int)uVar8 + 4;
              *plVar14 = lVar11;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uVar7 = *(uint *)(lVar16 + 0x18);
              uVar9 = (ulong)(uVar8 + 1);
            } while ((int)(uVar8 + 1) < (int)(uVar7 - 1));
          }
          if (in_stack_00000020 == (long *)0x0) break;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar11 = in_stack_00000020[4];
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar7 = (uint)uVar9;
          if (lVar11 == 0) {
            if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0685fd5c;
            plVar14 = *(long **)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar14 == (long *)0x0) ||
               (lVar16 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
               plVar10 == (long *)0x0)) break;
            if ((lVar16 != 0) &&
               (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_06860ed8;
            uVar8 = *(uint *)(plVar10 + 3);
          }
          else {
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar16 = in_stack_00000020[4];
            uVar21 = FUN_03398188(DAT_083c7838,1);
            lVar16 = FUN_06852fd0(lVar16,uVar21);
            if (plVar10 == (long *)0x0) break;
            if ((lVar16 != 0) &&
               (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_06860ed8;
            uVar8 = *(uint *)(plVar10 + 3);
          }
          if (uVar8 <= uVar7) goto LAB_0685fd5c;
          plVar14 = plVar10 + (long)(int)uVar7 + 4;
          *plVar14 = lVar16;
          if (DAT_08908cd0 == 0) {
            *unaff_x28 = (long)plVar10;
          }
          else {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
            *unaff_x28 = (long)plVar10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          goto LAB_06860db0;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0685fd5c;
        if (plVar10 == (long *)0x0) break;
        lVar11 = *(long *)(lVar11 + uVar9 * 8 + 0x20);
        if ((lVar11 != 0) &&
           (lVar12 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
        goto LAB_06860ed8;
        if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_0685fd5c;
        plVar14 = plVar10 + uVar9 + 4;
        *plVar14 = lVar11;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar11 = *unaff_x28;
        uVar9 = uVar9 + 1;
        if (lVar11 == 0) break;
      }
    }
  }
  goto LAB_0685eebc;
LAB_0685f2d4:
  if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
  plVar10 = (long *)*plVar10;
joined_r0x0685f2e4:
  if ((plVar10 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
     plVar10 == (long *)0x0)) goto LAB_0685eebc;
  in_stack_00000040 =
       (long *)(**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
LAB_0685f360:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (in_stack_00000040 == (long *)0x0) {
    if (*unaff_x28 == 0) goto LAB_0685eebc;
    uVar7 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar7 = *(int *)(lVar16 + 0x18) - 1;
  }
  if ((int)uVar7 < 1) {
    unaff_w20 = 0;
  }
  else {
    uVar8 = 0;
    plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
      lVar11 = (long)(int)uVar8;
      plVar18 = *(long **)(lVar16 + lVar11 * 8 + 0x20);
      if ((plVar18 == (long *)0x0) ||
         (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
         plVar18 == (long *)0x0)) goto LAB_0685eebc;
      uVar9 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380));
      if ((uVar9 & 1) != 0) {
        plVar18 = (long *)(**(code **)(*plVar18 + 0x448))(plVar18,*(undefined8 *)(*plVar18 + 0x450))
        ;
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar12 = *plVar10;
      if (lVar12 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
      if (unaff_x26 == 0) goto LAB_0685eebc;
      uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar19) goto LAB_0685fd5c;
      plVar14 = *(long **)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      unaff_x28 = in_stack_00000048;
      if (plVar14 != plVar18) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
          lVar12 = *plVar10;
          if (lVar12 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
          lVar23 = *in_stack_00000048;
          if (lVar23 == 0) goto LAB_0685eebc;
          uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_0685fd5c;
          lVar12 = *(long *)(lVar23 + (long)(int)uVar19 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar12 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar21 = DAT_083bd010;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar12 = *plVar10;
        if (lVar12 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
        lVar23 = *in_stack_00000048;
        if (lVar23 == 0) goto LAB_0685eebc;
        uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_0685fd5c;
        if (*(long *)(lVar23 + (long)(int)uVar19 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar14 = (long *)FUN_0683eca4(uVar21,0);
          if (plVar14 != plVar18) {
            if (plVar18 == (long *)0x0) goto LAB_0685eebc;
            uVar9 = (**(code **)(*plVar18 + 0x608))(plVar18,*(undefined8 *)(*plVar18 + 0x610));
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar12 = *plVar10;
            if (lVar12 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar12 + 0x18) <= uVar8) ||
               (uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20),
               *(uint *)(unaff_x26 + 0x18) <= uVar19)) goto LAB_0685fd5c;
            lVar12 = *(long *)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            unaff_w20 = uVar8;
            if ((uVar9 & 1) == 0) {
              if (lVar12 != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar12 = *plVar10;
                if (lVar12 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar12 + 0x18) <= uVar8) ||
                   (uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar19)) goto LAB_0685fd5c;
                uVar9 = (**(code **)(*plVar18 + 0x2b8))
                                  (plVar18,*(undefined8 *)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20)
                                   ,*(undefined8 *)(*plVar18 + 0x2c0));
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar12 = *plVar10;
                  if (lVar12 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar12 + 0x18) <= uVar8) ||
                     (uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar19)) goto LAB_0685fd5c;
                  plVar14 = *(long **)(unaff_x26 + (long)(int)uVar19 * 8 + 0x20);
                  if (plVar14 == (long *)0x0) goto LAB_0685eebc;
                  uVar9 = (**(code **)(*plVar14 + 0x588))(plVar14,*(undefined8 *)(*plVar14 + 0x590))
                  ;
                  if ((uVar9 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar12 = *plVar10;
                      if (lVar12 != 0) {
                        if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                          lVar23 = *in_stack_00000048;
                          if (lVar23 != 0) {
                            uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
                            if (uVar19 < *(uint *)(lVar23 + 0x18)) {
                              uVar9 = (**(code **)(*plVar18 + 0x908))
                                                (plVar18,*(undefined8 *)
                                                          (lVar23 + (long)(int)uVar19 * 8 + 0x20),
                                                 *(undefined8 *)(*plVar18 + 0x910));
                              goto joined_r0x0685f778;
                            }
                            goto LAB_0685fd5c;
                          }
                          goto LAB_0685eebc;
                        }
                        goto LAB_0685fd5c;
                      }
                      goto LAB_0685eebc;
                    }
                    goto LAB_0685fd5c;
                  }
                  break;
                }
              }
            }
            else {
              if (lVar12 == 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar12 = *plVar10;
              if (lVar12 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0685fd5c;
              lVar23 = *in_stack_00000048;
              if (lVar23 == 0) goto LAB_0685eebc;
              uVar19 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_0685fd5c;
              uVar21 = *(undefined8 *)(lVar23 + (long)(int)uVar19 * 8 + 0x20);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar18);
              }
              uVar9 = FUN_06861228(uVar21,plVar18);
joined_r0x0685f778:
              if ((uVar9 & 1) == 0) break;
            }
          }
        }
      }
LAB_0685f77c:
      uVar8 = uVar8 + 1;
      unaff_w20 = uVar7;
    } while (uVar7 != uVar8);
  }
  unaff_x22 = &DAT_083d2000;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  unaff_x27 = in_stack_00000028;
  if ((in_stack_00000040 == (long *)0x0) || (unaff_w20 != *(int *)(lVar16 + 0x18) - 1U))
  goto LAB_0685f94c;
  lVar16 = *unaff_x28;
  if (lVar16 == 0) goto LAB_0685eebc;
  unaff_x19 = (-(ulong)(unaff_w20 >> 0x1f) & 0xfffffff800000000 | (ulong)unaff_w20 << 3) + 0x20;
  goto LAB_0685f7dc;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
                    /* try { // try from 0685fc5c to 0695fc6f has its CatchHandler @ 068601bc */
  if (((((uint)in_stack_00000020[3] <= uVar7) || (uVar17 <= uVar20)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar20)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar20)) goto LAB_0685fd5c;
  lVar11 = in_stack_00000020[lVar16 + 4];
                    /* try { // try from 0685fc88 to 0695fc9b has its CatchHandler @ 068601f4 */
  lVar12 = unaff_x27[lVar16 + 4];
  uVar21 = *(undefined8 *)(unaff_x23 + lVar16 * 8 + 0x20);
  lVar23 = unaff_x27[uVar20 + 4];
  uVar22 = *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
  lVar16 = in_stack_00000020[uVar20 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* try { // try from 0685fcc4 to 0695fccb has its CatchHandler @ 068601e8 */
  iVar6 = FUN_06861580(lVar12,uVar21,lVar11,lVar23,uVar22,lVar16);
  if (iVar6 == 0) {
    if (uVar20 + 1 == uVar9) {
LAB_06860ef4:
      uVar22 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar21 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar21,uVar22,0);
LAB_06860fa0:
      uVar22 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar21,uVar22);
    }
    bVar5 = true;
LAB_0685fd44:
    uVar20 = uVar20 + 1;
    uVar17 = in_stack_00000028[3] & 0xffffffff;
    lVar16 = (long)(int)uVar7;
    unaff_x27 = in_stack_00000028;
    if ((uint)in_stack_00000028[3] <= uVar7) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar6 == 2) {
                    /* try { // try from 0685fcf0 to 0695fcf7 has its CatchHandler @ 06860180 */
    unaff_x22 = &DAT_083d2000;
    uVar7 = (uint)uVar20;
    if (uVar20 + 1 == uVar9) goto LAB_0685fdf8;
    bVar5 = false;
    goto LAB_0685fd44;
  }
                    /* try { // try from 0685fd38 to 0695fd3f has its CatchHandler @ 06860184 */
  unaff_x22 = &DAT_083d2000;
  if (uVar20 + 1 != uVar9) goto LAB_0685fd44;
  if (bVar5) goto LAB_06860ef4;
LAB_0685fdf8:
                    /* try { // try from 0685fdfc to 0695fe13 has its CatchHandler @ 06860164 */
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
    if (*plVar10 == 0) goto LAB_0685eebc;
    lVar16 = FUN_03398738();
                    /* try { // try from 0685fe28 to 0695fe2f has its CatchHandler @ 06860168 */
    lVar11 = *in_stack_00000048;
    if ((lVar11 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
                    /* try { // try from 0685fe3c to 0695fe3f has its CatchHandler @ 06860178 */
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar12 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    /* try { // try from 0685fe60 to 0695fe77 has its CatchHandler @ 06860174 */
      FUN_033b9870();
    }
    lVar23 = FUN_03398a84(DAT_083d57e0);
    uVar21 = DAT_083c7838;
    if (lVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
                    /* try { // try from 0685fe8c to 0695fe9f has its CatchHandler @ 06860170 */
      if (lVar13 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar16,uVar21);
      }
    }
    uVar3 = *(undefined4 *)(lVar11 + 0x18);
    plVar18 = (long *)(lVar23 + 0x10);
    *plVar18 = lVar13;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
      *in_stack_00000008 = lVar23;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
      *in_stack_00000008 = lVar23;
      puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    lVar16 = *plVar10;
    lVar11 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar16,lVar11);
    unaff_x22 = &DAT_083d2000;
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
  plVar18 = in_stack_00000028 + (long)(int)uVar7 + 4;
  plVar10 = (long *)*plVar18;
  if (((plVar10 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
      lVar16 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar6 = *(int *)(*in_stack_00000048 + 0x18);
  iVar15 = (int)*(ulong *)(lVar16 + 0x18);
  if (iVar15 == iVar6) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar11 != 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar8,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = FUN_06852fd0(lVar11);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar10 + 3);
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar19 = *(uint *)(plVar10 + 3);
      }
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar14);
      }
      FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  else {
    if (iVar6 < iVar15) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff);
      lVar11 = *in_stack_00000048;
      if (lVar11 != 0) {
        uVar9 = 0;
        do {
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar9) {
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar9) goto LAB_06860c2c;
            goto LAB_06860788;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0685fd5c;
          if (plVar10 == (long *)0x0) break;
          lVar11 = *(long *)(lVar11 + uVar9 * 8 + 0x20);
          if ((lVar11 != 0) &&
             (lVar12 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_0685fd5c;
          plVar14 = plVar10 + uVar9 + 4;
          *plVar14 = lVar11;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar11 = *in_stack_00000048;
          uVar9 = uVar9 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar18;
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar8 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar8,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar16 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar16 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar8;
      lVar16 = FUN_06852fd0(lVar11);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar10 + 3);
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar19 = *(uint *)(plVar10 + 3);
      }
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      plVar14 = (long *)*plVar14;
      if (plVar14 != (long *)0x0) {
        if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar16,uVar8,plVar14,0,*(int *)(lVar16 + 0x18) - uVar8,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
  while( true ) {
    plVar14 = *(long **)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar11 != 0) &&
       (lVar12 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar10 + 3) <= uVar19) goto LAB_0685fd5c;
    plVar14 = plVar10 + (long)(int)uVar19 + 4;
    *plVar14 = lVar11;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar9 = (ulong)(uVar19 + 1);
    if ((int)(uVar8 - 1) <= (int)(uVar19 + 1)) break;
LAB_06860788:
    uVar19 = (uint)uVar9;
    if (uVar8 <= uVar19) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = (uint)uVar9;
  if (lVar11 == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar14 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar16 != 0) &&
       (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_06860ed8;
    uVar19 = *(uint *)(plVar10 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar16 = in_stack_00000020[(long)(int)uVar7 + 4];
    uVar21 = FUN_03398188(DAT_083c7838,1);
    lVar16 = FUN_06852fd0(lVar16,uVar21);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar16 != 0) &&
       (lVar11 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_06860ed8:
      uVar21 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar21,0);
    }
    uVar19 = *(uint *)(plVar10 + 3);
  }
  if (uVar19 <= uVar8) goto LAB_0685fd5c;
  plVar14 = plVar10 + (long)(int)uVar8 + 4;
  *plVar14 = lVar16;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar10;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_06860ea8:
  if (uVar7 < *(uint *)(in_stack_00000028 + 3)) {
LAB_06860eb4:
    return *plVar18;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


