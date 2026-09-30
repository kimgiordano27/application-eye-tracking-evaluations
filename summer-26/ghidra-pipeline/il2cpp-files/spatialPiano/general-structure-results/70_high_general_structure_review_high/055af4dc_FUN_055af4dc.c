/*
FUNCTION_NAME: FUN_055af4dc
ENTRY_POINT: 055af4dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055af9a4) */

long FUN_055af4dc(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  
  if ((DAT_06bbfb1b & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbfb1b = 1;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) goto LAB_055af97c;
    lVar15 = *(long *)(param_2 + 0x28);
    lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if (lVar5 == 0) goto LAB_055af97c;
    uVar8 = *(undefined8 *)(lVar5 + 0x90);
    lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((lVar5 == 0) || (uVar12 = FUN_05546520(lVar5,0), lVar15 == 0)) goto LAB_055af97c;
    iVar3 = FUN_0558e230(lVar15,uVar8,uVar12,0,0);
  }
  else {
    if (param_2 == 0) goto LAB_055af97c;
    lVar15 = *(long *)(param_2 + 0x28);
    lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((lVar5 == 0) || (lVar15 == 0)) goto LAB_055af97c;
    iVar3 = FUN_0558e218(lVar15,*(undefined8 *)(lVar5 + 0x90),0);
  }
  if (iVar3 < 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar5 = FUN_0558c44c(*(long *)(param_2 + 0x28),iVar3,0);
    if (param_1[7] != 0) {
      uVar16 = *(ulong *)(param_1[7] + 0x18);
      plVar6 = (long *)FUN_02f0880c(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                    ,uVar16 & 0xffffffff);
      iVar3 = (int)uVar16;
      if (0 < iVar3) {
        lVar15 = 0;
        do {
          lVar13 = param_1[7];
          if (lVar13 == 0) goto LAB_055af97c;
          if (*(uint *)(lVar13 + 0x18) <= (uint)lVar15) {
LAB_055af994:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (((lVar5 == 0) || (lVar13 = *(long *)(lVar13 + lVar15 * 8 + 0x20), lVar13 == 0)) ||
             (*(long *)(lVar5 + 0x40) == 0)) goto LAB_055af97c;
          iVar4 = FUN_05580584(*(long *)(lVar5 + 0x40),*(undefined8 *)(lVar13 + 0x30),0);
          if (iVar4 < 0) {
            return 0;
          }
          if ((*(long *)(lVar5 + 0x40) == 0) ||
             (lVar13 = FUN_0557e298(*(long *)(lVar5 + 0x40),iVar4,0), plVar6 == (long *)0x0))
          goto LAB_055af97c;
          if ((lVar13 != 0) &&
             (lVar7 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,0);
          }
          if (*(uint *)(plVar6 + 3) <= (uint)lVar15) goto LAB_055af994;
          lVar7 = lVar15 + 1;
          plVar6[lVar15 + 4] = lVar13;
          lVar15 = lVar7;
        } while (iVar3 != (int)lVar7);
      }
      uVar8 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                                );
      FUN_0557b234(lVar5,0);
      FUN_055aed5c(lVar5,uVar8,plVar6);
      plVar6 = (long *)FUN_0557b028(param_1,0);
      if ((plVar6 != (long *)0x0) &&
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390)),
         plVar6 != (long *)0x0)) {
        lVar15 = *plVar6;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067cb558) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteString;
            }
            uVar16 = uVar16 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067cb558,0);
System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteString:
        plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
        puVar2 = PTR_DAT_067c91b8;
        do {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar13 = *plVar6;
          lVar15 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar15) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_055af804;
              }
              uVar16 = uVar16 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02f421d0(plVar6,lVar15,0);
LAB_055af804:
          uVar16 = (*(code *)*puVar9)(plVar6,puVar9[1]);
          puVar1 = PTR_DAT_067c91b0;
          if ((uVar16 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_02f45174(plVar6,*(undefined8 *)PTR_DAT_067c91b0);
            if (plVar6 == (long *)0x0) {
              return lVar5;
            }
            lVar15 = *plVar6;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 == 0) goto LAB_055af934;
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_055af91c;
          }
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar13 = *plVar6;
          lVar15 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar15) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_055af86c;
              }
              uVar16 = uVar16 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02f421d0(plVar6,lVar15,1);
LAB_055af86c:
          uVar8 = (*(code *)*puVar9)(plVar6,puVar9[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar10 = (long *)FUN_0557b028(lVar5,0);
          plVar11 = (long *)FUN_0557b028(param_1,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar12 = (**(code **)(*plVar11 + 0x308))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x310));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*plVar10 + 0x318))(plVar10,uVar8,uVar12,*(undefined8 *)(*plVar10 + 800));
        } while( true );
      }
    }
  }
LAB_055af97c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar14 = piVar14 + 4;
    if (uVar16 == 0) break;
LAB_055af91c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_055af950;
    }
  }
LAB_055af934:
  puVar9 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar1,0);
LAB_055af950:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
  return lVar5;
}


