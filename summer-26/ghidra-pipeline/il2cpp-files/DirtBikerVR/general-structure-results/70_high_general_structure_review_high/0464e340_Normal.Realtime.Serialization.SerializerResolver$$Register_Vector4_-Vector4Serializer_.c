/*
FUNCTION_NAME: Normal.Realtime.Serialization.SerializerResolver$$Register<Vector4,-Vector4Serializer>
ENTRY_POINT: 0464e340
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Normal_Realtime_Serialization_SerializerResolver__Register<Vector4,_Vector4Serializer>(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long unaff_x29;
  
  puVar4 = (undefined8 *)FUN_03ac43c4();
  uVar1 = (*(code *)*puVar4)();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
            (unaff_x29 + -0x68,uVar1,*(undefined4 *)(unaff_x19 + 0x24),0);
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                    (unaff_x29 + -0x68);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      *(int *)(unaff_x29 + -0x30) = iVar2;
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_0464e424;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_03ac43c4();
LAB_0464e424:
      *(long *)(unaff_x19 + 0x50) = unaff_x29 + -0x30;
      *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
      (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
      uVar5 = *puVar4;
      pcVar8 = (code *)puVar4[2];
      *(int *)(unaff_x29 + -0x30) = iVar2;
      *(long *)(unaff_x19 + 0x50) = unaff_x29 + -0x30;
      *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
      (*pcVar8)(uVar5,puVar4,unaff_x29 + -0x68,unaff_x19 + 0x50);
      iVar2 = iVar2 + 1;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                        (unaff_x29 + -0x68);
    } while (iVar2 < iVar3);
  }
  uVar5 = *(undefined8 *)(unaff_x24 + 0x40);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x24 + 0x48);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar5;
  if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
}


