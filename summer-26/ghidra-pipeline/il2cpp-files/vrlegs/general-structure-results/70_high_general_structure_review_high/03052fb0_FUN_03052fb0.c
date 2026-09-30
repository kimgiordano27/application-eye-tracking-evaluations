/*
FUNCTION_NAME: FUN_03052fb0
ENTRY_POINT: 03052fb0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;keyword_support
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;strong_file_logging_hits_2;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x030533a8) */

void FUN_03052fb0(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar1 = Unity_Physics_Authoring_CleanPhysicsDebugDataSystem_Default_var;
  if ((DAT_0412b3a2 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_XR_Eyes_var);
    FUN_01ab69ac(FMOD_FILE_ASYNCCANCEL_CALLBACK_var);
    FUN_01ab69ac(FMOD_FILE_ASYNCREAD_CALLBACK_var);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc1e80);
    FUN_01ab69ac(PTR_DAT_03cc1e88);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(FluffyUnderware_Curvy_Generator_CGData_var);
    FUN_01ab69ac(Unity_Physics_Authoring_CleanPhysicsDebugDataSystem_Default_var);
    FUN_01ab69ac(FMOD_FILE_CLOSE_CALLBACK_var);
    FUN_01ab69ac(FMOD_FILE_OPEN_CALLBACK_var);
    DAT_0412b3a2 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_0304437c(lVar4,0);
  if ((lVar4 != 0) && (FUN_03044968(lVar4), param_2 != (long *)0x0)) {
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cc1e80) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_030530f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(param_2,*(long *)PTR_DAT_03cc1e80,0);
LAB_030530f0:
    puVar1 = PTR_DAT_03cbed08;
    plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar3 = PTR_DAT_03cc1e88;
    puVar2 = PTR_DAT_03cbed20;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03053168;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar2,0);
LAB_03053168:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) == 0) goto LAB_030531e0;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_030531c4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar3,0);
LAB_030531c4:
      uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      FUN_03044f3c(lVar4,uVar7);
    } while( true );
  }
  goto LAB_030533a0;
LAB_030531e0:
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03053234;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar1,0);
LAB_03053234:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  FUN_03044a7c(lVar4);
  plVar6 = *(long **)(lVar4 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)FluffyUnderware_Curvy_Generator_CGData_var) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_030532a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01a472ec(plVar6,*(long *)FluffyUnderware_Curvy_Generator_CGData_var,0);
LAB_030532a8:
    auVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((param_3 & 1) != 0) {
      if ((param_1 == 0) || (lVar4 = FUN_03051934(param_1 + 0x28), lVar4 == 0)) goto LAB_030533a0;
      FUN_030516c4(lVar4,*(undefined8 *)FMOD_FILE_OPEN_CALLBACK_var,auVar11._0_8_,auVar11._8_8_);
    }
    if ((param_3 >> 1 & 1) != 0) {
      if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_030533a0;
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(param_1 + 0x18),&local_60,*(undefined8 *)FMOD_FILE_CLOSE_CALLBACK_var);
      puVar3 = FMOD_FILE_OPEN_CALLBACK_var;
      puVar2 = FMOD_FILE_ASYNCREAD_CALLBACK_var;
      puVar1 = FMOD_FILE_ASYNCCANCEL_CALLBACK_var;
      while (uVar9 = FUN_021b51c8(&local_60,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
        FUN_01b7a454(&local_60,&local_48,*(undefined8 *)puVar2);
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = FUN_03051934(local_48 + 0x30);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_030516c4(lVar4,*(undefined8 *)puVar3,auVar11._0_8_,auVar11._8_8_);
      }
      FUN_021b51c4(&local_60,*(undefined8 *)UnityEngine_XR_Eyes_var);
    }
    return;
  }
LAB_030533a0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


