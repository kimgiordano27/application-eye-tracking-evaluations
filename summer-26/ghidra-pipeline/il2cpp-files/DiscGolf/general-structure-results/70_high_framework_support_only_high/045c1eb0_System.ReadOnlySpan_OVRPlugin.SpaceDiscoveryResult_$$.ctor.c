/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 045c1eb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor
               (double param_1,long param_2,long param_3,long *param_4,long param_5)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  double extraout_x1;
  double extraout_x1_00;
  double extraout_x1_01;
  double extraout_x1_02;
  long *plVar9;
  double dVar10;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  double in_stack_00000030;
  char cStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((DAT_06db7302 & 1) == 0) {
    FUN_02d965b8(&DAT_06b35a68);
    DAT_06db7302 = 1;
  }
  _cStack0000000000000038 = 0;
  in_stack_00000040 = 0;
  plVar9 = param_4 + 7;
  cVar2 = (char)*plVar9;
  in_stack_00000048 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0.0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0.0;
  if ((cVar2 != '\0') && (*(char *)((long)param_4 + 0x84) == '\0')) {
    lVar8 = param_4[0x11];
    uVar7 = FUN_04324b54(plVar9,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70))
    ;
    if (param_4[6] == 0) goto LAB_045c2174;
    bVar6 = (**(code **)(*param_4 + 0x1a8))
                      ((int)lVar8,uVar7 >> 0x20,
                       *(undefined4 *)
                        (&DAT_010fc400 + (ulong)(*(int *)(param_4[6] + 0x20) == 0) * 4),param_4,
                       *(undefined8 *)(*param_4 + 0x1b0));
    *(byte *)((long)param_4 + 0x84) = bVar6 & 1;
  }
  puVar5 = PTR_DAT_069fbb48;
  lVar8 = param_4[6];
  if (lVar8 != 0) {
    dVar10 = 0.0;
    bVar3 = false;
    bVar1 = false;
    do {
      uVar7 = FUN_044cad3c(lVar8,&stack0x00000028,
                           *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x90));
      if (((uVar7 & 1) == 0) ||
         ((dVar4 = in_stack_00000030, cStack0000000000000038 != '\0' &&
          (FUN_04324b54(&stack0x00000038,
                        *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70)),
          dVar4 = in_stack_00000030, in_stack_00000030 == extraout_x1)))) {
        return;
      }
      in_stack_00000030 = dVar4;
      if (cVar2 != '\0') {
        if (dVar4 <= param_1) {
          FUN_04324b54(plVar9,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70));
          bVar1 = extraout_x1_00 < dVar4;
        }
        else {
          bVar1 = false;
        }
      }
      if ((!bVar1) && (param_1 < in_stack_00000030 || cVar2 != '\0')) {
        return;
      }
      if (param_4[6] == 0) break;
      uVar7 = FUN_044cac6c(param_4[6],&stack0x00000018,
                           *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa0));
      if ((uVar7 & 1) != 0) {
        if ((char)*plVar9 == '\0') {
          FUN_04324b3c();
          param_4[9] = 0;
          param_4[8] = 0;
          *plVar9 = 0;
          *(int *)((long)param_4 + 0x8c) = (int)param_4[0x11];
          *(int *)(param_4 + 0x12) = (int)param_4[0x11];
          lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
          *(undefined4 *)(param_4 + 0x10) = 0;
          param_4[0xd] = 0;
          param_4[0xc] = param_2;
          FUN_04324b54(plVar9,*(undefined8 *)(lVar8 + 0x70));
          *(undefined1 *)((long)param_4 + 0x84) = 0;
          param_4[0xe] = param_3;
          dVar10 = extraout_x1_02;
        }
        else {
          if (!bVar3) {
            lVar8 = FUN_04ba8144(plVar9,*(undefined8 *)
                                         (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb8));
            *(undefined1 *)((long)param_4 + 0x84) = 0;
            param_4[0xe] = param_3;
            param_4[0xf] = lVar8;
            *(int *)((long)param_4 + 0x8c) = (int)param_4[0x12];
            FUN_04324b54(plVar9,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70))
            ;
            dVar10 = extraout_x1_01;
          }
          dVar4 = in_stack_00000020;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar8 = FUN_054e90d8(dVar4 - dVar10,param_2,0);
          *(undefined4 *)(param_4 + 0x10) = 0;
          param_4[0xd] = 0;
          param_4[0xc] = lVar8;
          FUN_04324b3c();
          param_4[8] = 0;
          *plVar9 = 0;
          param_4[9] = 0;
        }
        bVar3 = true;
      }
      if ((char)*plVar9 == '\0') {
        return;
      }
      FUN_04324b3c(&stack0x00000038,in_stack_00000028,in_stack_00000030,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8));
      lVar8 = param_4[6];
    } while (lVar8 != 0);
  }
LAB_045c2174:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


