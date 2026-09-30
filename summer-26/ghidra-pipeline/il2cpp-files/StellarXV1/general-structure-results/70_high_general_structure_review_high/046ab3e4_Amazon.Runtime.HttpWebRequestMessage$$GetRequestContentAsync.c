/*
FUNCTION_NAME: Amazon.Runtime.HttpWebRequestMessage$$GetRequestContentAsync
ENTRY_POINT: 046ab3e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Amazon_Runtime_HttpWebRequestMessage__GetRequestContentAsync(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined4 uVar9;
  undefined4 in_s3;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x238));
  FUN_04077588(PTR_DAT_09286df8);
  *(undefined1 *)(unaff_x20 + 0x9a8) = 1;
  plVar8 = *(long **)(unaff_x19 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09295238) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto Amazon_Runtime_HttpWebRequestMessage__Dispose;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09295238,4);
Amazon_Runtime_HttpWebRequestMessage__Dispose:
    puVar1 = PTR_DAT_09286df8;
    uVar9 = 0;
    (*(code *)*puVar2)(0,plVar8,puVar2[1]);
    if (DAT_09885626 == '\0') {
      FUN_04077588(PTR_DAT_09286df8);
      DAT_09885626 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    puVar2 = *(undefined8 **)(lVar5 + 0xb8);
    in_stack_00000018 = puVar2[1];
    in_stack_00000010 = *puVar2;
    uVar3 = thunk_FUN_040b4b34(lVar5,&stack0x00000010);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar5 = FUN_089ca988(*(long *)(unaff_x19 + 0x10),0), lVar5 != 0)) {
      FUN_089dbd64(lVar5,0);
      uStack0000000000000004 = uVar9;
      uStack000000000000000c = in_s3;
      uVar4 = thunk_FUN_040b4b34(*(undefined8 *)puVar1);
      FUN_07893eec(uVar3,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


