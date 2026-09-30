/*
FUNCTION_NAME: Unity.VisualScripting.Unit$$GetAnalyticsIdentifier
ENTRY_POINT: 08448588
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


uint Unity_VisualScripting_Unit__GetAnalyticsIdentifier(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
FUN_0844859c:
  do {
    lVar3 = (*(code *)*param_1)(unaff_x24,param_1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar4 = Unity_Collections_NativeArray<XRTextureDescriptor>__Allocate(lVar3,unaff_x22,*unaff_x29)
    ;
    if ((uVar4 & 1) == 0) {
      return unaff_w20;
    }
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0844860c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f4b594(unaff_x22,*unaff_x25,0);
LAB_0844860c:
    lVar3 = (*(code *)*puVar5)(unaff_x22,puVar5[1]);
    iVar1 = unaff_w21 + 1;
    if (lVar3 != unaff_x23) {
      return unaff_w20;
    }
    iVar2 = FUN_084474e4();
    unaff_w20 = (uint)(iVar2 <= iVar1);
    if (iVar2 <= iVar1) {
      return 1;
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    unaff_x22 = (long *)FUN_056b0600(*(long *)(unaff_x19 + 0x28),unaff_w21,*unaff_x26);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    unaff_x24 = (long *)FUN_056b0600(*(long *)(unaff_x19 + 0x30),unaff_w21,*unaff_x27);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    unaff_x23 = FUN_056b0600(*(long *)(unaff_x19 + 0x30),iVar1,*unaff_x27);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar3 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_w21 = iVar1;
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          param_1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto FUN_0844859c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_03f4b594(unaff_x24,*unaff_x28,4);
  } while( true );
}


