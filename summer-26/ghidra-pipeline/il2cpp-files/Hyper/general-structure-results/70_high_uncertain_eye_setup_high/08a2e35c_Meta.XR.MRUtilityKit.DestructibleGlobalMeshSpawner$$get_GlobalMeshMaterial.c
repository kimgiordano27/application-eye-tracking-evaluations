/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$get_GlobalMeshMaterial
ENTRY_POINT: 08a2e35c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a2e4d8) */

uint Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__get_GlobalMeshMaterial
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long extraout_x1;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_08a2e388;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_04980e68(unaff_x19,param_3,0);
LAB_08a2e388:
        uVar1 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
LAB_08a2e444:
          if (in_stack_00000018 == (long *)0x0) goto LAB_08a2e4b0;
          lVar4 = *in_stack_00000018;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_08a2e488;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_08a2e470;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar4 = *in_stack_00000018;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_08a2e3f0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x22,0);
LAB_08a2e3f0:
        (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
        if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if ((*(int *)(extraout_x1 + 0x30) == 4) && (iVar2 = FUN_08a2af64(extraout_x1,0), iVar2 == 5)
           ) goto LAB_08a2e444;
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        param_1 = *in_stack_00000018;
        param_3 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x19 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_08a2e470:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_08a2e4a4;
    }
  }
LAB_08a2e488:
  puVar3 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a2e4a4:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
LAB_08a2e4b0:
  return uVar1 & 1;
}


