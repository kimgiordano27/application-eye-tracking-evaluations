/*
FUNCTION_NAME: FUN_05a191e0
ENTRY_POINT: 05a191e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05a191e0(ulong param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 char *param_7,int param_8,int *param_9)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  double dVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_4e8 [144];
  undefined1 auStack_458 [144];
  undefined1 auStack_3c8 [144];
  undefined1 auStack_338 [144];
  undefined8 local_2a8;
  uint local_2a0 [34];
  undefined8 local_218;
  undefined4 local_210 [34];
  int local_188;
  long local_184;
  undefined8 local_f8;
  uint local_f0 [34];
  long local_68;
  
                    /* try { // try from 05a191f8 to 05b19203 has its CatchHandler @ 05a19214 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 05a19210 to 05b19213 has its CatchHandler @ 05a19218 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a191f8 with catch @ 05a19214
                       try { // try from 05a19214 to 05b19243 has its CatchHandler @ 05a191cc */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a19210 with catch @ 05a19218
                        */
  if ((DAT_06bc2067 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
                    /* try { // try from 05a19244 to 05b19247 has its CatchHandler @ 05a19284 */
                    /* try { // try from 05a19248 to 05b19273 has its CatchHandler @ 05a191cc */
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc2067 = 1;
  }
  memset(&local_f8,0,0x90);
  memset(&local_188,0,0x90);
  memset(&local_218,0,0x90);
  memset(&local_2a8,0,0x90);
  memset(auStack_338,0,0x90);
  memset(auStack_3c8,0,0x90);
  memset(auStack_458,0,0x90);
  memset(auStack_4e8,0,0x90);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if (param_1 == 0) {
    iVar9 = 1;
    *param_7 = '0';
    *param_9 = 0;
    goto LAB_05a19cc0;
  }
  memset(&local_f8,0,0x90);
  memset(&local_188,0,0x90);
  memset(&local_218,0,0x90);
  memset(&local_2a8,0,0x90);
  if ((param_4 & 1) == 0) {
    lVar8 = param_1 << 1;
    uVar10 = (param_1 & 0x7fffffffffffffff) >> 0x1f;
    if ((int)param_2 < 1) {
      if (uVar10 == 0) {
        local_188 = 0;
        if (lVar8 != 0) {
          local_184 = CONCAT44(local_184._4_4_,(int)lVar8);
          local_188 = 1;
        }
      }
      else {
        local_184 = lVar8;
        local_188 = 2;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = 1 - param_2;
      uVar6 = 0x20 - param_2;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1;
      }
      iVar9 = (int)uVar6 >> 5;
      uVar6 = iVar9 + 1;
      if (-0x20 < (int)uVar1) {
        uVar11 = (ulong)uVar6 - 1;
        uVar10 = (ulong)uVar6 + 3 & 0x1fffffffc;
        puVar12 = local_f0 + 2;
        uVar18 = _DAT_011b46c0;
        uVar19 = _UNK_011b46c8;
        uVar20 = _DAT_011b30e0;
        uVar21 = _UNK_011b30e8;
        do {
          if (uVar20 <= uVar11) {
            puVar12[-3] = 0;
          }
          if (uVar21 <= uVar11) {
            puVar12[-2] = 0;
          }
          if (uVar18 <= uVar11) {
            puVar12[-1] = 0;
          }
          if (uVar19 <= uVar11) {
            *puVar12 = 0;
          }
          uVar18 = uVar18 + 4;
          uVar19 = uVar19 + 4;
          uVar20 = uVar20 + 4;
          uVar21 = uVar21 + 4;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
        } while (uVar10 != 0);
      }
      local_f8 = CONCAT44(local_f8._4_4_,uVar6);
      local_f0[(long)iVar9 + -1] = local_f0[(long)iVar9 + -1] | 1 << (ulong)(uVar1 & 0x1f);
      local_218 = 0x100000001;
    }
    else {
      if (uVar10 == 0) {
        local_188 = 0;
        if (lVar8 != 0) {
          local_184 = CONCAT44(local_184._4_4_,(int)lVar8);
          local_188 = 1;
        }
      }
      else {
        local_188 = 2;
        local_184 = lVar8;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a190c0(&local_188,param_2);
      uVar6 = param_2 >> 5;
      uVar11 = (ulong)(uVar6 + 1) - 1;
      local_f8 = DAT_011b1530;
      uVar10 = (ulong)(uVar6 + 4) & 0xffffffc;
      puVar13 = local_210 + 2;
      uVar18 = _DAT_011b46c0;
      uVar19 = _UNK_011b46c8;
      uVar20 = _DAT_011b30e0;
      uVar21 = _UNK_011b30e8;
      do {
        if (uVar20 <= uVar11) {
          puVar13[-3] = 0;
        }
        if (uVar21 <= uVar11) {
          puVar13[-2] = 0;
        }
        if (uVar18 <= uVar11) {
          puVar13[-1] = 0;
        }
        if (uVar19 <= uVar11) {
          *puVar13 = 0;
        }
        uVar18 = uVar18 + 4;
        uVar19 = uVar19 + 4;
        uVar20 = uVar20 + 4;
        uVar21 = uVar21 + 4;
        uVar10 = uVar10 - 4;
        puVar13 = puVar13 + 4;
      } while (uVar10 != 0);
      local_218 = CONCAT44(local_218._4_4_,uVar6 + 1);
      *(uint *)(((ulong)&local_218 | 4) + (ulong)uVar6 * 4) =
           *(uint *)(((ulong)&local_218 | 4) + (ulong)uVar6 * 4) | 1 << (ulong)(param_2 & 0x1f);
    }
    puVar16 = &local_218;
  }
  else {
    lVar8 = param_1 << 2;
    uVar10 = (param_1 & 0x3fffffffffffffff) >> 0x1e;
    if ((int)param_2 < 1) {
      if (uVar10 == 0) {
        local_188 = 0;
        if (lVar8 != 0) {
          local_184 = CONCAT44(local_184._4_4_,(int)lVar8);
          local_188 = 1;
        }
      }
      else {
        local_184 = lVar8;
        local_188 = 2;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = 2 - param_2;
      uVar6 = 0x21 - param_2;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1;
      }
      iVar9 = (int)uVar6 >> 5;
      uVar6 = iVar9 + 1;
      if (-0x20 < (int)uVar1) {
        uVar11 = (ulong)uVar6 - 1;
        uVar10 = (ulong)uVar6 + 3 & 0x1fffffffc;
        puVar12 = local_f0 + 2;
        uVar18 = _DAT_011b46c0;
        uVar19 = _UNK_011b46c8;
        uVar20 = _DAT_011b30e0;
        uVar21 = _UNK_011b30e8;
        do {
          if (uVar20 <= uVar11) {
            puVar12[-3] = 0;
          }
          if (uVar21 <= uVar11) {
            puVar12[-2] = 0;
          }
          if (uVar18 <= uVar11) {
            puVar12[-1] = 0;
          }
          if (uVar19 <= uVar11) {
            *puVar12 = 0;
          }
          uVar18 = uVar18 + 4;
          uVar19 = uVar19 + 4;
          uVar20 = uVar20 + 4;
          uVar21 = uVar21 + 4;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
        } while (uVar10 != 0);
      }
      local_f8 = CONCAT44(local_f8._4_4_,uVar6);
      puVar16 = &local_2a8;
      local_f0[(long)iVar9 + -1] = local_f0[(long)iVar9 + -1] | 1 << (ulong)(uVar1 & 0x1f);
      local_218 = 0x100000001;
      local_2a8 = DAT_011b1530;
    }
    else {
      if (uVar10 == 0) {
        local_188 = 0;
        if (lVar8 != 0) {
          local_184 = CONCAT44(local_184._4_4_,(int)lVar8);
          local_188 = 1;
        }
      }
      else {
        local_188 = 2;
        local_184 = lVar8;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a190c0(&local_188,param_2);
      uVar6 = param_2 >> 5;
      uVar11 = (ulong)(uVar6 + 1) - 1;
      local_f8 = DAT_011b0f50;
      uVar10 = (ulong)(uVar6 + 4) & 0xffffffc;
      puVar13 = local_210 + 2;
      uVar18 = _DAT_011b46c0;
      uVar19 = _UNK_011b46c8;
      uVar20 = _DAT_011b30e0;
      uVar21 = _UNK_011b30e8;
      do {
        if (uVar20 <= uVar11) {
          puVar13[-3] = 0;
        }
        if (uVar21 <= uVar11) {
          puVar13[-2] = 0;
        }
        if (uVar18 <= uVar11) {
          puVar13[-1] = 0;
        }
        if (uVar19 <= uVar11) {
          *puVar13 = 0;
        }
        uVar18 = uVar18 + 4;
        uVar19 = uVar19 + 4;
        uVar20 = uVar20 + 4;
        uVar21 = uVar21 + 4;
        uVar10 = uVar10 - 4;
        puVar13 = puVar13 + 4;
      } while (uVar10 != 0);
      local_218 = CONCAT44(local_218._4_4_,uVar6 + 1);
      uVar1 = param_2 + 1;
      iVar9 = param_2 + 0x20;
      if (-1 < (int)uVar1) {
        iVar9 = param_2 + 1;
      }
      iVar9 = iVar9 >> 5;
      *(uint *)(((ulong)&local_218 | 4) + (ulong)uVar6 * 4) =
           *(uint *)(((ulong)&local_218 | 4) + (ulong)uVar6 * 4) | 1 << (ulong)(param_2 & 0x1f);
      uVar6 = iVar9 + 1;
      if (-0x20 < (int)uVar1) {
        uVar11 = (ulong)uVar6 - 1;
        uVar10 = (ulong)uVar6 + 3 & 0x1fffffffc;
        puVar12 = local_2a0 + 2;
        uVar18 = _DAT_011b46c0;
        uVar19 = _UNK_011b46c8;
        uVar20 = _DAT_011b30e0;
        uVar21 = _UNK_011b30e8;
        do {
          if (uVar20 <= uVar11) {
            puVar12[-3] = 0;
          }
          if (uVar21 <= uVar11) {
            puVar12[-2] = 0;
          }
          if (uVar18 <= uVar11) {
            puVar12[-1] = 0;
          }
          if (uVar19 <= uVar11) {
            *puVar12 = 0;
          }
          uVar18 = uVar18 + 4;
          uVar19 = uVar19 + 4;
          uVar20 = uVar20 + 4;
          uVar21 = uVar21 + 4;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar16 = &local_2a8;
      local_2a8 = CONCAT44(local_2a8._4_4_,uVar6);
      local_2a0[(long)iVar9 + -1] = local_2a0[(long)iVar9 + -1] | 1 << (ulong)(uVar1 & 0x1f);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar5 = -param_6;
  dVar17 = (double)(int)(param_3 + param_2) * DAT_011b1970 + DAT_011b1170;
  iVar9 = (int)dVar17;
  iVar4 = -0x80000000;
  if ((double)(long)dVar17 != INFINITY) {
    iVar4 = iVar9;
  }
  if (iVar4 <= iVar5) {
    iVar9 = 1 - param_6;
  }
  if (param_5 != 2) {
    iVar9 = iVar4;
  }
  if (iVar9 < 1) {
    if (iVar9 < 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a18b54(auStack_3c8,-iVar9);
      FUN_05a185d0(auStack_458,&local_188,auStack_3c8);
      memcpy(&local_188,auStack_458,0x90);
      FUN_05a185d0(auStack_458,&local_218,auStack_3c8);
      memcpy(&local_218,auStack_458,0x90);
      if (puVar16 != &local_218) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05a187f4(puVar16,&local_218);
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a18d30(auStack_338,&local_f8,iVar9);
    memcpy(&local_f8,auStack_338,0x90);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar4 = FUN_05a18440(&local_188,&local_f8);
  if (iVar4 < 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a188a8(&local_188);
    FUN_05a188a8(&local_218);
    if (puVar16 != &local_218) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a187f4(puVar16,&local_218);
    }
  }
  else {
    iVar9 = iVar9 + 1;
  }
  param_8 = iVar9 - param_8;
  iVar4 = param_8;
  if (param_5 == 2) {
    if (param_8 <= iVar5) {
      iVar4 = iVar5;
    }
  }
  else if ((param_5 == 1) && (iVar4 = iVar9 - param_6, iVar9 - param_6 <= param_8)) {
    iVar4 = param_8;
  }
  *param_9 = iVar9 + -1;
  uVar6 = local_f0[(long)((int)local_f8 + -1) + -1];
  if (uVar6 + 0xe6666666 < 0xe666666e) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar5 = FUN_05a182f8(uVar6);
    uVar6 = 0x1b - iVar5;
    FUN_05a190c0(&local_f8,uVar6 & 0x1f);
    FUN_05a190c0(&local_188,uVar6 & 0x1f);
    FUN_05a190c0(&local_218,uVar6 & 0x1f);
    if (puVar16 != &local_218) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a187f4(puVar16,&local_218);
    }
  }
  iVar4 = iVar4 - iVar9;
  pcVar14 = param_7;
  if (param_5 == 0) {
    while( true ) {
      iVar4 = iVar4 + 1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_05a18f5c(&local_188,&local_f8);
      FUN_05a1849c(auStack_4e8,&local_188,puVar16);
      iVar9 = FUN_05a18440(&local_188,&local_218);
      iVar5 = FUN_05a18440(auStack_4e8,&local_f8);
      if (((iVar4 == 0) || (iVar9 < 0)) || (0 < iVar5)) break;
      pcVar15 = pcVar14 + 1;
      *pcVar14 = (char)uVar6 + '0';
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a188a8(&local_188);
      FUN_05a188a8(&local_218);
      pcVar14 = pcVar15;
      if (puVar16 != &local_218) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05a187f4(puVar16,&local_218);
      }
    }
    if (iVar9 < 0 == 0 < iVar5) goto LAB_05a19c44;
    if (-1 < iVar9) goto LAB_05a19c80;
LAB_05a19c74:
    cVar7 = (char)uVar6 + '0';
LAB_05a19cb8:
    iVar9 = (int)pcVar14 + 1;
    *pcVar14 = cVar7;
  }
  else {
    while( true ) {
      iVar4 = iVar4 + 1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_05a18f5c(&local_188,&local_f8);
      if ((iVar4 == 0) || (local_188 == 0)) break;
      *pcVar14 = (char)uVar6 + '0';
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a188a8(&local_188);
      pcVar14 = pcVar14 + 1;
    }
LAB_05a19c44:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a18850(&local_188);
    iVar9 = FUN_05a18440(&local_188,&local_f8);
    if (iVar9 == 0) {
      if ((uVar6 & 1) != 0) goto LAB_05a19c80;
      goto LAB_05a19c74;
    }
    if (iVar9 < 0) goto LAB_05a19c74;
LAB_05a19c80:
    if (uVar6 != 9) {
      cVar7 = (char)uVar6 + '1';
      goto LAB_05a19cb8;
    }
    do {
      pcVar15 = pcVar14;
      iVar9 = (int)pcVar15;
      if (pcVar15 == param_7) {
        iVar9 = iVar9 + 1;
        *param_7 = '1';
        *param_9 = *param_9 + 1;
        goto LAB_05a19cbc;
      }
      cVar7 = pcVar15[-1];
      pcVar14 = pcVar15 + -1;
    } while (cVar7 == '9');
    pcVar15[-1] = cVar7 + '\x01';
  }
LAB_05a19cbc:
  iVar9 = iVar9 - (int)param_7;
LAB_05a19cc0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}


