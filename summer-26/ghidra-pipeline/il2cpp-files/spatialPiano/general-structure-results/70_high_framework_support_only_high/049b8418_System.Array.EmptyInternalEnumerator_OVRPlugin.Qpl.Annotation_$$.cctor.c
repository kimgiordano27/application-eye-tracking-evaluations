/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 049b8418
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>___cctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  
  if ((DAT_06bb782f & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc938);
    FUN_02f08768(PTR_DAT_067c9648);
    DAT_06bb782f = 1;
  }
  in_stack_00000028 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(3,0);
  }
  iVar1 = thunk_FUN_02f177cc(param_2,0);
  if (iVar1 != 1) {
    FUN_050f5b58(7,0);
  }
  iVar1 = thunk_FUN_02f1778c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_050f5b58(6,0);
  }
  uVar2 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
  if (uVar2 < param_3) {
    FUN_050f63c0(0);
  }
  iVar1 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_050f5b58(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  lVar6 = thunk_FUN_02f45174(param_2,lVar6);
  if (lVar6 != 0) {
    FUN_049b6c40(param_1,lVar6,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x178));
    return;
  }
  lVar6 = thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067cc938);
  if (lVar6 == 0) {
    plVar4 = (long *)thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067c9648);
    if (plVar4 == (long *)0x0) {
      FUN_050f63f8();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = 0;
      puVar9 = (undefined8 *)(lVar6 + 0x30);
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (-1 < *(int *)(puVar9 + -2)) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_03945408(&stack0x00000010,*(undefined4 *)(puVar9 + -1),*puVar9,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
          lVar7 = thunk_FUN_02f44ec4(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar7 != 0) &&
             (lVar5 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar3,0);
          }
          if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar5 = (long)(int)param_3;
          param_3 = param_3 + 1;
          plVar4[lVar5 + 4] = lVar7;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 3;
      } while (uVar2 != uVar8);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = 0;
      puVar9 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_049b8700;
        if (-1 < *(int *)(puVar9 + -2)) {
          uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_049b8700:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_05077ff4(&stack0x00000010,uVar3,*puVar9,0);
          if (*(uint *)(lVar6 + 0x18) <= param_3) goto LAB_049b8700;
          lVar5 = lVar6 + (long)(int)param_3 * 0x10;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000010;
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 3;
      } while ((long)uVar8 < (long)iVar1);
    }
  }
  return;
}


