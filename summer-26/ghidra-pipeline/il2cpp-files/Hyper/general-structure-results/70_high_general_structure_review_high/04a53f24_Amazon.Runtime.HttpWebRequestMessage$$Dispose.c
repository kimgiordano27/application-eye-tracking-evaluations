/*
FUNCTION_NAME: Amazon.Runtime.HttpWebRequestMessage$$Dispose
ENTRY_POINT: 04a53f24
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 *
Amazon_Runtime_HttpWebRequestMessage__Dispose(void *param_1,long *param_2,size_t param_3)

{
  char *pcVar1;
  ushort uVar2;
  long *__ptr;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long *unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  void *pvVar8;
  void *unaff_x25;
  long *plVar9;
  uint unaff_w26;
  undefined1 auVar10 [16];
  long in_stack_00000000;
  
code_r0x04a53f24:
  memcpy(param_1,param_2,param_3);
  param_1 = unaff_x25;
  param_3 = unaff_x24;
LAB_04a53f2c:
  unaff_x20[2] = (long)param_1;
  do {
    plVar9 = (long *)((long)param_1 + param_3);
    unaff_x20[4] = (long)((long)param_1 + ((long)param_3 >> 2) * 8);
    do {
      unaff_x20[3] = (long)(plVar9 + 1);
      *plVar9 = unaff_x23;
      pcVar1 = (char *)*unaff_x20;
      if ((pcVar1 != (char *)unaff_x20[1]) && (*pcVar1 == 'E')) {
        *unaff_x20 = (long)(pcVar1 + 1);
        auVar10 = FUN_04a51628();
        pvVar8 = (void *)unaff_x20[0x266];
        lVar4 = *(long *)((long)pvVar8 + 8);
        puVar3 = pvVar8;
        if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
          puVar3 = malloc(0x1000);
          if (puVar3 == (void *)0x0) goto LAB_04a541d4;
          lVar4 = 0;
          *puVar3 = pvVar8;
          puVar3[1] = 0;
          unaff_x20[0x266] = (long)puVar3;
        }
        *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
        puVar7 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
        *puVar7 = &PTR_FUN_0ac08640;
        *(undefined1 (*) [16])((long)puVar3 + lVar4 + 0x20) = auVar10;
        *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x35;
        *(ushort *)((long)puVar3 + lVar4 + 0x19) =
             *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
        if ((puVar7 == (undefined8 *)0x0) || (in_stack_00000000 == 0)) {
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          pvVar8 = (void *)unaff_x20[0x266];
          lVar4 = *(long *)((long)pvVar8 + 8);
          puVar3 = pvVar8;
          if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
            puVar3 = malloc(0x1000);
            if (puVar3 == (void *)0x0) goto LAB_04a541d4;
            lVar4 = 0;
            *puVar3 = pvVar8;
            puVar3[1] = 0;
            unaff_x20[0x266] = (long)puVar3;
          }
          *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
          *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0ac08720;
          *(long *)((long)puVar3 + lVar4 + 0x20) = in_stack_00000000;
          *(undefined8 **)((long)puVar3 + lVar4 + 0x28) = puVar7;
          *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x1c;
          *(ushort *)((long)puVar3 + lVar4 + 0x19) =
               *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
        }
        puVar3 = (undefined8 *)FUN_04a60828();
        if (puVar3 == (undefined8 *)0x0) {
          unaff_w26 = 1;
        }
        if ((unaff_w26 & 1) == 0) {
          pvVar8 = (void *)unaff_x20[0x266];
          lVar4 = *(long *)((long)pvVar8 + 8);
          puVar7 = pvVar8;
          if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_04a541d4;
            lVar4 = 0;
            *puVar7 = pvVar8;
            puVar7[1] = 0;
            unaff_x20[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
          puVar5 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
          *puVar5 = &PTR_FUN_0ac08790;
          uVar2 = *(ushort *)((long)puVar7 + lVar4 + 0x19);
          uVar6 = 0x19;
        }
        else {
          if (unaff_x19 == 0) {
            return puVar3;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          pvVar8 = (void *)unaff_x20[0x266];
          lVar4 = *(long *)((long)pvVar8 + 8);
          puVar7 = pvVar8;
          if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) {
LAB_04a541d4:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar4 = 0;
            *puVar7 = pvVar8;
            puVar7[1] = 0;
            unaff_x20[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
          puVar5 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
          *puVar5 = &PTR_FUN_0ac08800;
          uVar2 = *(ushort *)((long)puVar7 + lVar4 + 0x19);
          uVar6 = 0x18;
        }
        puVar5[2] = unaff_x19;
        puVar5[3] = puVar3;
        *(undefined1 *)(puVar5 + 1) = uVar6;
        *(ushort *)((long)puVar5 + 9) = uVar2 & 0xf000 | 0x540;
        return puVar5;
      }
      unaff_x23 = FUN_04a52818();
      if (unaff_x23 == 0) {
        return (undefined8 *)0x0;
      }
      plVar9 = (long *)unaff_x20[3];
    } while (plVar9 != (long *)unaff_x20[4]);
    __ptr = (long *)unaff_x20[2];
    param_3 = (long)plVar9 - (long)__ptr;
    if (__ptr == unaff_x22) break;
    param_1 = realloc(__ptr,param_3 * 2);
    unaff_x20[2] = (long)param_1;
    if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
  param_1 = malloc(param_3 * 2);
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_2 = unaff_x22;
  unaff_x24 = param_3;
  unaff_x25 = param_1;
  if (plVar9 != unaff_x22) goto code_r0x04a53f24;
  goto LAB_04a53f2c;
}


