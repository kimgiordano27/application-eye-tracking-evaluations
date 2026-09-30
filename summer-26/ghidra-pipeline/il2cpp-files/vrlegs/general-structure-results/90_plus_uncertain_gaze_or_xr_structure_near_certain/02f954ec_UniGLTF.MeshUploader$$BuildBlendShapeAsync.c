/*
FUNCTION_NAME: UniGLTF.MeshUploader$$BuildBlendShapeAsync
ENTRY_POINT: 02f954ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f95770) */
/* WARNING: Removing unreachable block (ram,0x02f95780) */
/* WARNING: Removing unreachable block (ram,0x02f95718) */

long UniGLTF_MeshUploader__BuildBlendShapeAsync(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x20;
  int iVar7;
  long lVar8;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02f9551c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01a472ec();
LAB_02f9551c:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
          iVar7 = 5;
          goto LAB_02f956a0;
        }
        lVar5 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x29) {
              puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_02f9557c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01a472ec();
LAB_02f9557c:
        lVar5 = (*(code *)*puVar1)();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar8 = *unaff_x28;
        plVar3 = (long *)thunk_FUN_01a89d6c(lVar5,lVar8);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar5,lVar8);
        }
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x28) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02f955f4;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x28,0);
LAB_02f955f4:
        lVar5 = (*(code *)*puVar1)(plVar3);
        if (lVar5 != 0) {
          lVar8 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 == 0) goto LAB_02f95644;
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_02f9562c;
        }
        param_1 = *unaff_x20;
        param_3 = *unaff_x29;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_02f9562c:
    if (*(long *)(piVar6 + -2) == *unaff_x28) {
      puVar1 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
      goto LAB_02f95678;
    }
  }
LAB_02f95644:
  puVar1 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x28,2);
LAB_02f95678:
  uVar4 = (*(code *)*puVar1)(plVar3,puVar1[1]);
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  iVar7 = 4;
LAB_02f956a0:
  plVar3 = (long *)thunk_FUN_01a89d6c();
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f95700;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x27,0);
LAB_02f95700:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (iVar7 != 4) {
    lVar5 = 0;
  }
  return lVar5;
}


