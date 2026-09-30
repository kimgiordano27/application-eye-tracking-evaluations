/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05590124
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x05590124:
  if (in_stack_00000008 != (long *)0x0) {
    iVar5 = unaff_w23 - unaff_w22;
LAB_05590134:
    FUN_0549ac20(in_stack_00000008,unaff_x20,unaff_w22,iVar5,0);
    bVar1 = true;
    unaff_x20 = in_stack_00000018;
    unaff_w22 = unaff_w23;
    if (in_stack_00000018 != 0) {
      do {
        iVar5 = unaff_w22;
        if (unaff_w22 < *(int *)(unaff_x20 + 0x10)) {
          do {
            while (uVar4 = FUN_055520f4(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0), 4 < uVar4) {
              sVar2 = FUN_05487524(unaff_x20,iVar5,0);
              if (sVar2 == 0x27) {
                unaff_w23 = iVar5 + 1;
                if (!bVar1) goto code_r0x05590124;
                unaff_x20 = unaff_x21;
                if (unaff_x21 == 0) {
                  unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
                }
                if (in_stack_00000008 == (long *)0x0) goto LAB_05590238;
                iVar5 = unaff_w23 - unaff_w22;
                unaff_x21 = unaff_x20;
                goto LAB_05590134;
              }
              if (((unaff_w26 << (ulong)(uVar4 & 0x1f) & unaff_w27) != 0) ||
                 (iVar5 = in_stack_00000000._4_4_ + iVar5, *(int *)(unaff_x20 + 0x10) <= iVar5))
              goto LAB_05590168;
            }
            iVar5 = in_stack_00000000._4_4_ + iVar5;
            bVar1 = (bool)(uVar4 == 1 | bVar1);
          } while (iVar5 < *(int *)(unaff_x20 + 0x10));
        }
LAB_05590168:
        if (0 < iVar5 - unaff_w22) {
          if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
            unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
            unaff_x21 = unaff_x20;
          }
          if (in_stack_00000008 == (long *)0x0) break;
          FUN_0549ac20(in_stack_00000008,unaff_x20,unaff_w22,iVar5 - unaff_w22,0);
        }
        unaff_x20 = in_stack_00000018;
        if (in_stack_00000018 == 0) break;
        if (*(int *)(in_stack_00000018 + 0x10) <= iVar5) goto LAB_055901ec;
        do {
          iVar5 = FUN_055903fc(&stack0x00000008,&stack0x00000018,iVar5,in_stack_00000000._4_4_);
LAB_055901ec:
          iVar5 = iVar5 + 1;
          if (*(int *)(unaff_x20 + 0x10) <= iVar5) {
            if (in_stack_00000008 != (long *)0x0) {
              uVar7 = (**(code **)(*in_stack_00000008 + 0x168))
                                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
              return uVar7;
            }
            goto LAB_05590238;
          }
          iVar3 = FUN_055520f4(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0);
          if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c(*(long *)(unaff_x25 + 0x88));
          }
          uVar6 = FUN_05580434(iVar3,0);
        } while ((uVar6 & 1) == 0);
        iVar5 = FUN_05590284();
        bVar1 = iVar3 == 1;
        unaff_w22 = iVar5 + 1;
      } while( true );
    }
  }
LAB_05590238:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


