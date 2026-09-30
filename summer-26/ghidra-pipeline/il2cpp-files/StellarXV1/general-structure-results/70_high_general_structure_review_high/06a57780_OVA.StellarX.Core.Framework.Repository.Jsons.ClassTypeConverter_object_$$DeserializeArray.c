/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Repository.Jsons.ClassTypeConverter<object>$$DeserializeArray
ENTRY_POINT: 06a57780
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
OVA_StellarX_Core_Framework_Repository_Jsons_ClassTypeConverter<object>__DeserializeArray
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *piVar4;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uVar6;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_06a577b8;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_040b1e00(unaff_x21,param_3,0);
LAB_06a577b8:
      uVar6 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
      lVar3 = unaff_x19[5];
      if ((lVar3 == 0) ||
         (uVar2 = (**(code **)(lVar3 + 0x18))
                            (uVar6,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28)),
         (uVar2 & 1) != 0)) {
        lVar3 = unaff_x19[6];
        if (lVar3 != 0) {
          lVar3 = (**(code **)(lVar3 + 0x18))
                            (uVar6,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          unaff_x19[3] = lVar3;
          return 1;
        }
LAB_06a5783c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar5 = (long *)unaff_x19[7];
      if (plVar5 == (long *)0x0) goto LAB_06a5783c;
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06a57734;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x22,0);
LAB_06a57734:
      uVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
        }
        goto LAB_06a5783c;
      }
      unaff_x21 = (long *)unaff_x19[7];
      if (unaff_x21 == (long *)0x0) goto LAB_06a5783c;
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_040b1acc(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


