/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeValue<HalfVector3>
ENTRY_POINT: 03a0e444
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


long Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *extraout_x1;
  long lVar9;
  long lVar10;
  long *unaff_x21;
  
                    /* catch() { ... } // from try @ 03a0e0c0 with catch @ 03a0e444
                       catch() { ... } // from try @ 03a0e3fc with catch @ 03a0e444 */
                    /* catch() { ... } // from try @ 03a0e124 with catch @ 03a0e448
                       catch() { ... } // from try @ 03a0e40c with catch @ 03a0e448 */
                    /* catch() { ... } // from try @ 03a0e3f8 with catch @ 03a0e44c */
  FUN_062855bc(param_1,0);
  puVar2 = PTR_DAT_07d88668;
                    /* catch() { ... } // from try @ 03a0e3f4 with catch @ 03a0e450 */
  if (unaff_x21 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03a0e3f0 with catch @ 03a0e454 */
                    /* catch() { ... } // from try @ 03a0e3ec with catch @ 03a0e458 */
                    /* catch() { ... } // from try @ 03a0e3e8 with catch @ 03a0e45c */
                    /* catch() { ... } // from try @ 03a0e3e0 with catch @ 03a0e460 */
                    /* catch() { ... } // from try @ 03a0e3dc with catch @ 03a0e464 */
                    /* catch() { ... } // from try @ 03a0e3d8 with catch @ 03a0e468 */
                    /* catch() { ... } // from try @ 03a0e3d4 with catch @ 03a0e46c */
                    /* catch() { ... } // from try @ 03a0df88 with catch @ 03a0e470 */
                    /* catch() { ... } // from try @ 03a0e3d0 with catch @ 03a0e474 */
    uVar5 = (**(code **)(*unaff_x21 + 0x1a8))();
                    /* catch() { ... } // from try @ 03a0e3cc with catch @ 03a0e478 */
                    /* catch() { ... } // from try @ 03a0e23c with catch @ 03a0e47c */
                    /* catch() { ... } // from try @ 03a0e3c4 with catch @ 03a0e480 */
                    /* catch() { ... } // from try @ 03a0e3c0 with catch @ 03a0e484 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    bVar4 = FUN_03a0eac4(uVar5);
    puVar2 = PTR_DAT_07d91cd0;
    if (param_1 != 0) {
      *(byte *)(param_1 + 0x10) = bVar4 & 1;
      puVar3 = PTR_DAT_07d91cc8;
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_049ce6c0(lVar6,*(undefined8 *)puVar3);
      plVar7 = (long *)(**(code **)(*unaff_x21 + 0x1a8))();
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x318))(&stack0x00000008,plVar7,*(undefined8 *)(*plVar7 + 800));
        memcpy(&stack0x00000050,&stack0x00000008,0x48);
        uVar8 = FUN_03a0c774(&stack0x00000050);
        puVar2 = PTR_DAT_07d91cb8;
        if ((uVar8 & 1) == 0) {
          if (lVar6 == 0) goto LAB_03a0e5f4;
        }
        else {
          do {
            FUN_03a0c62c(&stack0x00000050);
            if (extraout_x1 == (long *)0x0) goto LAB_03a0e5f4;
            (**(code **)(*extraout_x1 + 0x3d8))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x3e0));
            uVar5 = FUN_03a0eb4c();
            if (lVar6 == 0) goto LAB_03a0e5f4;
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_03a0e5f4;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar6,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_03a0c774(&stack0x00000050);
          } while ((uVar8 & 1) != 0);
        }
        uVar5 = FUN_049d0970(lVar6,*(undefined8 *)PTR_DAT_07d91cc0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_037aeb94();
        return param_1;
      }
    }
  }
LAB_03a0e5f4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


