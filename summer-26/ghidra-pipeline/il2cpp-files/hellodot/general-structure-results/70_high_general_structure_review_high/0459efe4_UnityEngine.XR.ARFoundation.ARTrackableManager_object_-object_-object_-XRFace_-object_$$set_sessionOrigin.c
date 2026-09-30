/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackableManager<object,-object,-object,-XRFace,-object>$$set_sessionOrigin
ENTRY_POINT: 0459efe4
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
UnityEngine_XR_ARFoundation_ARTrackableManager<object,_object,_object,_XRFace,_object>__set_sessionOrigin
          (void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x22;
  undefined1 auVar8 [16];
  long in_stack_00000018;
  long in_stack_00000028;
  
  lVar1 = FUN_02ce0978();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0459f044;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0459f044:
  plVar3 = (long *)(*(code *)*puVar2)();
  *(long **)(in_stack_00000028 + 0x48) = plVar3;
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0459f0cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x22,0);
LAB_0459f0cc:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      FUN_0459f3fc();
      *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
      return 0;
    }
    plVar3 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978(lVar1);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0459f158;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar1,0);
LAB_0459f158:
    auVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar1 = *(long *)(in_stack_00000028 + 0x38);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar3 = (long *)(**(code **)(lVar1 + 0x18))
                               (*(undefined8 *)(lVar1 + 0x40),auVar8._0_8_,auVar8._8_8_,
                                *(undefined8 *)(lVar1 + 0x28));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978(lVar1);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0459f204;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar1,0);
LAB_0459f204:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    *(long **)(in_stack_00000028 + 0x50) = plVar3;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffc;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0459f274;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x22,0);
LAB_0459f274:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar3 = *(long **)(in_stack_00000028 + 0x50);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978(lVar1);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0459f30c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    FUN_0459f4ac();
    plVar3 = *(long **)(in_stack_00000028 + 0x48);
    *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == lVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0459f328;
    }
  }
LAB_0459f30c:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar1,0);
LAB_0459f328:
  uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  *(undefined8 *)(in_stack_00000028 + 0x18) = uVar4;
  *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  return 1;
}


